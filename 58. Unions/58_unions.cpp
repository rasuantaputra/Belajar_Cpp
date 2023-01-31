#include<iostream>

// union menyimpan dalam 1 adress
// sehingga jika kita merubah data, maka yg lain jg akan berubah
// hanya berisi int dan char
union nama
{
    int int_value;
    
    char char_value[4];
};

int main()
{

    nama manusia;

    manusia.int_value = 1234567890;

    std::cout << "data int_value : " << manusia.int_value << std::endl;
    std::cout << "char int_value : " << manusia.char_value << std::endl;

    manusia.char_value [0] = 'a';
    manusia.char_value [1] = 'b';
    manusia.char_value [2] = 'c';
    manusia.char_value [3] = 'd';

    std::cout << "data int_value : " << manusia.int_value << std::endl;
    std::cout << "char int_value : " << manusia.char_value << std::endl;

    std::cin.get();
    return 0;
}
