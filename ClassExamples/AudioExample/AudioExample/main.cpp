//
//  main.cpp
//  AudioExample
//
//  Created by Hack Audio on 10/5/19.
//  Copyright © 2019 Eric Tarr. All rights reserved.
//

#include <iostream>
#include "AudioFile/AudioFile.hpp"
using namespace std;

int main() {
    
    string filename = "AcGtr.wav";
    int Fs;
    int bitDepth;
    int numChannels;
    vector<float> signal;
    
    audioread(filename,signal,Fs,bitDepth,numChannels);
    
    int N = signal.size();
    
    string outName = "Test.wav";
    audiowrite(outName,signal,Fs,bitDepth,numChannels);
    
    
    return 0;
}
