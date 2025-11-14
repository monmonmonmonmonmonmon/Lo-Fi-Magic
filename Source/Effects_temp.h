//
// Created by Ayumu Fujimoto on 25/11/14.
//

#ifndef EFFECTS_H
#define EFFECTS_H
#include <juce_audio_basics/buffers/juce_AudioSampleBuffer.h>


class Effects_temp {
public:
    Effects_temp();
    ~Effects_temp(){};

    void applyNoise(juce::AudioBuffer<float>& buffer);
    void applyBitCrusher(juce::AudioBuffer<float>& buffer);
    void applyWowFlutter(juce::AudioBuffer<float>& buffer);
    void applySaturation(juce::AudioBuffer<float>& buffer);
    void applyHighCut(juce::AudioBuffer<float>& buffer);
};



#endif //EFFECTS_H
