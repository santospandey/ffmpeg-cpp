cd .. && make
cd root && cp ../build/liba.so .
LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/treeleaf/Desktop/ffmpeg-cpp/source/ffmpeg-cpp/root/liba.so
export LD_LIBRARY_PATH
g++ -o main main.cpp -L. -la -L/home/treeleaf/Desktop/ffmpeg-cpp/ffmpeg -lavformat -lavcodec -lavutil -lswscale -lavfilter
