cd .. && make
cd root && cp ../build/liba.so .
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/treeleaf/Desktop/ffmpeg-cpp/source/ffmpeg-cpp/root/liba.so
g++ -o main main.cpp audio-merge.cpp -L. -la -L/home/treeleaf/Desktop/ffmpeg-cpp/ffmpeg -lavformat -lavcodec -lavutil -lswscale -lavfilter
