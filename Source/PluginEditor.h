#pragma once

#include "PluginProcessor.h"

//==============================================================================
class AudioPluginAudioProcessorEditor final : public juce::AudioProcessorEditor
{
public:
    explicit AudioPluginAudioProcessorEditor (AudioPluginAudioProcessor&);
    ~AudioPluginAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    AudioPluginAudioProcessor& processorRef;

    // テキストボタンを用意
    juce::TextButton applyButton;

    using ButtonAttachment = juce::AudioProcessorValueTreeState::ButtonAttachment;

    // ButtonAttachmentのユニークポインタ型のアタッチメントを用意
    std::unique_ptr<ButtonAttachment> applyAttachment;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudioPluginAudioProcessorEditor)
};
