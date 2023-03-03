#include <iostream>
#include "../../ffmpeg-cpp/ffmpegcpp.h"
#include "./audio-merge.h"
#include <vector>
using namespace std;
using namespace ffmpegcpp ;
AudioMerge::AudioMerge(std::vector <audio> audio_samples,const char* output_sample) 
{
    this->audio_samples=audio_samples;
    this->output_sample=output_sample;
    std::cout<<"Output filename:"<<output_sample<<std::endl;
    uint16_t i=1;
    for(audio samples:audio_samples)
    {
        std::cout<<"samples."<<i<<std::endl;
        std::cout<<"\tFilepath:"<<samples.path<<std::endl;
        std::cout<<"\tDelay:"<<samples.delay<<std::endl;
        i++;    
    }
Muxer* muxer = new Muxer(output_sample);
AudioCodec* codec = new AudioCodec(AV_CODEC_ID_AAC);
AudioEncoder* encoder = new AudioEncoder(codec, muxer);
Filter* filter = new Filter("amix", encoder);
   
 
}
