#include<iostream>

// #define ID 0
#define ID 1

#if ID
    // kalau true
    #define LANG "Indonesia"
#else
    #define LANG "English"
#endif

int main(int argc, char const *argv[])
{

    std::cout << "Bahasa dipilih : " << LANG << std::endl;

    std::cin.get();
    return 0;
}
