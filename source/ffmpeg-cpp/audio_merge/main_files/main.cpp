#include "audio-merge.h"
#include <vector>
int main()
{   
    std::vector<audio> a;
    audio sample1, sample2, sample3;
    const char* file_name="merged_audio.opus";
    
    sample1.path = "../../../samples/1.opus";
    sample1.delay = 4000;
    sample2.path = "../../../samples/2.opus";
    sample2.delay = 4000;
    sample3.path = "../../../samples/3.opus";
    sample3.delay = 4000;
    a.push_back(sample1);
    a.push_back(sample2);
    a.push_back(sample3);
    AudioMerge(a,file_name);

}

