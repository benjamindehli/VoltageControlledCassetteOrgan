// Voltage Controlled Cassette Organ — a thin product wrapper. All behaviour lives in
// the shared engine (dm::ManifestPluginProcessor); this only supplies the embedded
// asset bundle.

#include <ManifestPluginProcessor.h>

#if VCCO_HAS_ASSETS
 #include <BinaryData.h>
#endif

juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    dm::ManifestPluginProcessor::Assets assets;
    assets.name = JucePlugin_Name;
    assets.version = JucePlugin_VersionString;

    // Samples live in a memory-mapped pack in a shared support folder, not embedded in the
    // binary (this is a multi-GB library). The build's POST_BUILD step (VCCO_PACK_DEST in
    // CMakeLists.txt) installs samples.pak there — this path MUST match it. Note JUCE's
    // userApplicationDataDirectory is "~/Library" on macOS (not "~/Library/Application
    // Support"), so append it there; on Windows it's already %APPDATA%.
    auto supportDir = juce::File::getSpecialLocation (juce::File::userApplicationDataDirectory);
   #if JUCE_MAC
    supportDir = supportDir.getChildFile ("Application Support");
   #endif
    assets.packFile = supportDir.getChildFile ("DehliMusikk")
                                .getChildFile ("VoltageControlledCassetteOrgan")
                                .getChildFile ("samples.pak");

   #if VCCO_HAS_ASSETS
    // The manifest is embedded SPLIT (manifest/index.json + modes/); the shared
    // processor loads it via findResource, so no single manifest.json is needed.
    assets.findResource = [] (const juce::String& filename, int& sizeOut) -> const char*
    {
        for (int i = 0; i < BinaryData::namedResourceListSize; ++i)
            if (filename == BinaryData::originalFilenames[i])
                return BinaryData::getNamedResource (BinaryData::namedResourceList[i], sizeOut);
        return nullptr;
    };
   #endif

    return new dm::ManifestPluginProcessor (std::move (assets));
}
