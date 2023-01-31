#include<iostream>
#include<string>

struct actor
{
    std::string nama;
    int tahun_lahir;
};

struct film
{
    std::string judul;
    std::string genre;
    int tahun;

    // struct actor
    actor pemeran_1;
    actor pemeran_2;
};

int main()
{
    // ===========================================
    
    actor pemain_1, pemain_2;
    film film_1, film_2;

    // ===========================================

    pemain_1.nama = "zaraki kenpachi";
    pemain_1.tahun_lahir = 1996;

    pemain_2.nama = "kuchiki rukia";
    pemain_2.tahun_lahir = 2003;

    // ===========================================

    film_1.judul = "crewsakan";
    film_1.genre = "action";
    film_1.tahun = 2022;
    film_1.pemeran_1 = pemain_1;
    film_1.pemeran_2 = pemain_2;

    std::cout << "=====" + film_1.judul + "===== \n" << std::endl;

    std::cout << film_1.judul << std::endl;
    std::cout << film_1.genre << std::endl;
    std::cout << film_1.tahun << std::endl;
    std::cout << film_1.pemeran_1.nama << std::endl;
    std::cout << film_1.pemeran_2.nama + "\n" << std::endl;

    // ===========================================

    film_2.judul = "black cave";
    film_2.genre = "humor";
    film_2.tahun = 2021;
    film_2.pemeran_1 = pemain_1;

    std::cout << "=====" + film_2.judul + "===== \n" << std::endl;

    std::cout << film_2.judul << std::endl;
    std::cout << film_2.genre << std::endl;
    std::cout << film_2.tahun << std::endl;
    std::cout << film_2.pemeran_1.nama << std::endl;
    // tidak akan ditampilkan karena kosong
    std::cout << film_2.pemeran_2.nama << std::endl;

    // ===========================================

    std::cin.get();
    return 0;
}
