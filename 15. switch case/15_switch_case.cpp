#include <iostream>

int main(int argc, char const *argv[])
{

    int a;

    std::cout << "masukan nilai : ";
    std::cin >> a;

    switch (a)
    {
    case 1:
        std::cout << "a = 1" << std::endl;
        break;
    case 2:
        std::cout << "a = 2" << std::endl;
        // break;
    case 3:
        std::cout << "a = 3" << std::endl;
        // break;
    case 4:
        std::cout << "a = 4" << std::endl;
        // break;
    case 5:
        std::cout << "a = 5" << std::endl;
        // break;
    default:
        std::cout << "default" << std::endl;
        // break;
    }

    std::cin.get();
    return 0;
}