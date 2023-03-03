#ifndef AUDIO_MERGE_H
#define AUDIO_MERGE_H

#include "../../ffmpeg-cpp/ffmpegcpp.h"
#include <vector>
struct audio
{
const char* path;
uint32_t delay;
};

class AudioMerge
{
private:
std::vector<audio> audio_samples;
const char*output_sample;
public:
   AudioMerge(std::vector<audio> audio_samples,const char *output_sample);
  
};

#endif