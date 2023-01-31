#include<iostream>

// macro
// dia hanya di preposesing, ga dimasukin memori
#define PI 3.1415926539

int main(int argc, char const *argv[])
{
    double pi = 3.1415926539;

    std::cout <<"nilai pi : " << pi << '\n';
    std::cout <<"adress pi : " << &pi << '\n';

    std::cout <<"nilai PI : " << PI << '\n';
    // akan error, karena ga di compile (alias ga dimasukan ke memori)
    // std::cout <<"adress pi : " << &PI << '\n';
    std::cin.get();
    return 0;
}
