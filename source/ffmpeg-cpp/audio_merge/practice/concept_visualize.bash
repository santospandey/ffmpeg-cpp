echo -e "\e[34m******Compiling..******\e[0m"
if g++  concept_visualize.cpp  -L ./ -ladd -o concept_visualize  ; then
    echo -e "\e[32m******Compilation successful******\e[0m"
    ./concept_visualize
else
    echo -e "\e[31m!Compilation failed\e[0m"
fi

