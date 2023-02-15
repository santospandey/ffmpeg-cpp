#include <iostream>
#include "../ffmpeg-cpp/ffmpegcpp.h"

int main(){
    ffmpegcpp::AudioCodec *codec = new ffmpegcpp::AudioCodec("mpeg4");
    int sample_rate = codec->GetDefaultSampleRate();
    std::cout<<"sample rate "<<sample_rate<<std::endl;



    return 0;
}