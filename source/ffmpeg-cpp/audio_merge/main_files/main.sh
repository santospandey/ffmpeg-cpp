echo -e "\e[34m******Compiling..******\e[0m"
if g++ -o main  audio_filter.cpp ../../ffmpeg-cpp/Muxing/Muxer.cpp ../../ffmpeg-cpp/FrameSinks/Filter.cpp -la -lavcodec -lavfilter -lavutil -lswscale -lavformat; then
    echo -e "\e[32m******Compilation successful******\e[0m"
     ./main
else
    echo -e "\e[31m!Compilation failed\e[0m"
fi

