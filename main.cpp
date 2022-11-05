#include <iostream>
#include <cmath>
#include "AudioFile.h"

// const int sampleRate = 44100;

// class SineOscillator
// {
//     float frequency;
//     float amplitude;
//     float angle = 0.0f;

// public:
//     SineOscillator(float freq, float amp) : frequency(freq), amplitude(amp) {}
//     float process()
//     {
//         auto sample = amplitude * sin(2 * M_PI * frequency / sampleRate);
//         angle = angle +
//         // Asin(2*pi*f/sampleRate)
//     }
// };

int main()
{
    AudioFile<double> audioFile;
    audioFile.load("testAudioFile.wav");
    audioFile.save("output.wav");

    int channel = 0;
    int numSamples = audioFile.getNumSamplesPerChannel();

    // int sampleRate = audioFile.getSampleRate();
    // int bitDepth = audioFile.getBitDepth();

    // int numSamples = audioFile.getNumSamplesPerChannel();
    // double lengthInSeconds = audioFile.getLengthInSeconds();

    // int numChannels = audioFile.getNumChannels();
    // bool isMono = audioFile.isMono();
    // bool isStereo = audioFile.isStereo();

    // or, just use this quick shortcut to print a summary to the console
    // audioFile.printSummary();

    for (int i = 0; i < numSamples; i++)
    {
        double currentSample = audioFile.samples[channel][i];
        // std::cout << "Channel: " << channel << std::endl;
        // std::cout << "Current Sample: " << currentSample << std::endl;
        std::cout << currentSample << std::endl;
    }

    return 0;
}
