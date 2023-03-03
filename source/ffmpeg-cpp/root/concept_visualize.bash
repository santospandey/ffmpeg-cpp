echo -e "\e[34m******Compiling..******\e[0m"
if g++ practice.cpp -o practice; then
    echo -e "\e[32m**********Compilation successful**********\e[0m"
    ./practice
else
    echo -e "\e[31m!Compilation failed\e[0m"
fi
