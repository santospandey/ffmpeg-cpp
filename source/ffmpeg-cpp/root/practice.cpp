#include <iostream>
using namespace std;
struct student
{
    string name;
    int a;
    int b;
};
int main()
{
    student *s = nullptr;
    s->name = "ram";
    std::cout << s->name << std::endl;
    return 0;
}