// Awal prepocessing directive
#include<iostream>

// macro merubah nilai dengan nama
#define PI 3.14159265359
#define BAHASA "Indonesia"

// macro untuk fungsi
#define KUADRAT(X) (X * X)
#define MAX(A,B) ((A > B) ? A:B)
// akhir prepocessing directive

int main(int argc, char const *argv[])
{   
    std::cout << "Nilai PI : " << PI << std::endl;
    std::cout << "Bahasa : " << BAHASA << std::endl;
    std::cout << "Kuadrat : " << KUADRAT(70) << std::endl;
    std::cout << "Max : " << MAX(2,9) << std::endl;

    // melakukan undifine pada macro BAHASA
    #undef BAHASA
    // melakukan define ulang pada BAHASA
    #define BAHASA "Inggris"

    std::cout << "Bahasa : " << BAHASA << std::endl;
    

    std::cin.get();
    return 0;
}
