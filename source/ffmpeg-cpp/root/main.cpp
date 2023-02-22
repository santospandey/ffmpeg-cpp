#include <iostream>
#include <string>

#include "../ffmpeg-cpp/ffmpegcpp.h"

using namespace ffmpegcpp;
using namespace std;

// This example demonstrates different combinations and usages for ffmpeg-cpp.
// Configure it by changing the values below.
// The list of supported codecs is not limited to the ones mentioned below,
// this is just a list we support in this demo. You can use any codec that is
// supported by ffmpeg, but you might have to write your own Codec-class wrapper
// to make it work. Look at the examples in the Codecs-dir to see how it is done.
void PlayDemo()
{
    // Create a muxer that will output the video as MP4.
    Muxer* muxer = new Muxer("jojo.opus");

// Create a MPEG2 codec that will encode the raw data.
    AudioCodec* codec = new AudioCodec(AV_CODEC_ID_OPUS);

// Create an encoder that will encode the raw audio data using the codec specified above.
// Tie it to the muxer so it will be written to file.
    AudioEncoder* encoder = new AudioEncoder(codec, muxer);

// Create a video filter and do some funny stuff with the video data.
    Filter* filter = new Filter("scale=-1:-1,fps=30", encoder);
//    Filter* filter = new Filter(" -filter_complex ", encoder);

// Load a container. Pick the best video stream container in the container
// And send it to the filter.
    Demuxer* demuxer = new Demuxer("/home/treeleaf/Desktop/sample3.opus");
    demuxer->DecodeBestAudioStream(filter);

// Prepare the output pipeline.
// This will decode a small amount of frames so the pipeline can configure itself.
    demuxer->PreparePipeline();

// Push all the remaining frames through.
    while (!demuxer->IsDone())
    {
        demuxer->Step();
    }

// Save everything to disk by closing the muxer.
    muxer->Close();

}


int main(int argc, char **argv){
    ffmpegcpp::AudioCodec *codec = new ffmpegcpp::AudioCodec("mpeg4");
    int sample_rate = codec->GetDefaultSampleRate();
    std::cout<<"sample rate "<<sample_rate<<std::endl;

    PlayDemo();

    return 0;
}