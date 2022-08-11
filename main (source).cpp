#include <iostream>
#include <sstream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char const* argv[])
{
    float b = 1000;
    float a = 999;

    print("& github: github.com/tickydev/cping/");
    system("title Console");

    if (b > a)
    {
        system("ping example.com /n 4/l 40 /w 15");
    }


}
