# Voltage Controlled Cassette Organ - Version: [1.0]

Date: 2023-06-26
Name: Benjamin Dehli
Profile: pianobook.co.uk/profile/benjamindehli

## Included formats

- Decent Sampler

## The Story

I discovered that the Korg CX-3, when sampled through cassette tape, introduced some imperfections that transformed the sound. The wow and flutter effects, along with the random warbles, created a fascinating movement reminiscent of a chorus/vibrato or the doppler effect from a rotary speaker. However, unlike traditional modulation effects with fixed speed, the cassette tape introduced a more random and organic quality to the modulation.

## Description

You'll get the iconic sound of the Korg CX-3, infused with the unmistakable charm of cassette tape recording, with the Voltage Controlled Cassette Organ. It captures the essence of the organs analog oscillators as well as the pitch fluctuation (wow/flutter), harmonic distortion, and coloration associated with cassette tape recordings.

Each note for every drawbar, as well as the sound of the key click, has been meticulously sampled as individual audio files, ensuring authenticity and attention to detail.
To achieve an even richer sound, the organ has been recorded twice onto cassette tape, resulting in a double-track effect that adds depth and character. Thanks to the inherent idiosyncrasies of tape deck mechanics and the tape itself, each playback yields a slightly different result.

It also includes impulse responses for two tape delay/echo types and two room reverbs.

## Technical specification

|                       | Sample rate | Bit depth | Channels   | Number of files | File size |
|----------------------:|------------:|----------:|------------|----------------:|----------:|
|           **Samples** |      48 kHz |    24 bit | 1 (mono)   |            1220 |   3.46 GB |
| **Impulse responses** |      48 kHz |    24 bit | 2 (stereo) |               4 |   3.60 MB |

## Instrument presets

To ensure optimal performance and flexibility, the library offers two presets: A quite resource-intensive "All Drawbars" preset with 9 drawbars and a "Single Drawbar" preset which conserves resources by playing back fewer samples per key. The "Single Drawbar" preset does however have samples from different drawbars for an extended key range.

### All Drawbars

The "All Drawbars" preset plays back 20 different samples per note, resulting in a rich and complex sound. However, it does demand significant system resources, especially when playing big chords.

### Single Drawbar

As a more resource-friendly alternative, the "Single Drawbar" preset plays back only four samples per key. This preset also incorporates additional knobs for adjusting the envelope decay curve and release curve, maximizing your creative control.

## User Interface

The user interface offers precise control over every aspect of the instrument and effects.
Explore parameters to refine your sound, including control over the nine drawbars, key click volume, envelope, amplitude modulation with LFOs, double track, and the immersive effects of echo and reverb.

### ADSR Envelope

Shape your sound precisely with the Attack, Decay, Sustain, and Release parameters. Whether you desire a punchy, staccato tone or a smooth, lingering ambiance, the ADSR envelope allows you to tailor the dynamics to your liking.

- Attack
  - Individual attack time of the amplitude envelope for each drawbar
- Decay
  - Individual decay time of the amplitude envelope for each drawbar
- Sustain
  - Individual sustain level of the amplitude envelope for each drawbar
- Release
  - Individual release time of the amplitude envelope for each drawbar

#### Envelope curves

For even more control over the envelope, you can change the curve of the attack time. The "Single Drawbar" preset also incorporates two additional knobs for decay curve and release curve. The decay curve and release curve are exponential for the "All Drawbars" preset.

- Attack curve
  - Adjusts the curve of the attack time from logarithmic to exponential with linear in the middle
- Decay curve
  - Adjusts the curve of the decay time from logarithmic to exponential with linear in the middle
- Release curve
  - Adjusts the curve of the release time from logarithmic to exponential with linear in the middle

### LFO

The LFO Rate and LFO Depth knobs enable you to modulate the amplitude of the drawbars with the desired depth and rate using the Low-Frequency Oscillator (LFO), opening up a world of rhythmic possibilities.

- LFO Rate
  - LFO rate determines the speed at which the modulation occurs
- LFO Depth
  - Adjust the LFO depth to introduce subtle or pronounced variations in volume

### Drawbars

Unleash the power of the nine drawbars to shape your organ's tone with precision. Each drawbar controls the amplitude of a specific harmonic overtone, offering you unparalleled control over the instrument's harmonic richness.

Unfortunately DecentSampler doesn't support reversed/inverted vertical control for drawbars which means you have to click and drag the mouse upwards to make the drawbar go downwards. I have however submitted a feature request for this.

### Key click

During the early production of Hammond organs, a seemingly unintentional and unwanted occurrence was observed — a distinctive click or pop sound that accompanied the pressing of a key. Initially, this peculiar phenomenon was perceived as a manufacturing flaw or an undesirable artifact of the instrument. Efforts were made to mitigate or eliminate the clicking sound, as it was not part of the intended design.

Musicians discovered that this inadvertent click, which was initially considered a fault, actually contributed a unique and appealing quality to the instrument's overall sound. Rather than viewing it as an unwanted artifact, musicians started to appreciate the click as a distinct characteristic that added depth and character to their performances.

The click's percussive nature, akin to the striking of a mallet on a percussion instrument, provided a lively and vibrant attack to the notes played on the organ.

## Double track

Each sample has been recorded twice and can be mixed together for a "chorus" effect or panned for a stereo effect.

Because of the nature of the tape deck mechanics and the tape itself, the sound will be a bit different for every time it's recorded and played back.

### Controls

- On
  - Turns on or off the double track samples
- Stereo
  - Toggle between both tracks in center (mono) or one track panned left and one track panned right (stereo).

## Effects

These effects are achieved using carefully crafted impulse responses. The echo effect employs a Fulltone Tube Tape Echo recorded twice for stereo, while the reverb effect draws from a Chase Bliss Audio & Meris CXM 1978 reverb pedal with a room setting.

### Echo

Select from two distinctive echo options: the short echo, delivering a classic slapback effect, and the long echo, characterized by a slower decay and numerous repeats.

- On
  - Turns the echo on and off
- Long
  - Switches between a short slapback echo and a long echo with slow repeats and high feedback
- Mix
  - Mix between direct signal and echo signal

### Reverb

You'll also find two reverb effects: the short reverb, evoking the intimacy of a small room, and the long reverb, enveloping your sound in the vastness of a spacious environment.

- On
  - Turns the reverb on and off
- Long
  - Switches between a short/small room reverb and a long/big room reverb
- Mix
  - Mix between direct signal and reverb signal
