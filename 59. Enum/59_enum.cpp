#include<iostream>


// fungsinya untuk range data
// enum menggunakan index urutan data
// merah index 0, kuning 1, dst
enum warna {merah, kuning, hijau, coklat, putih, hitam};

// kalau salah satu data nya dikasih index, kebelakangnya jadi berbeda
// genryusai index 0, soifon 1, gin, 2 dst
// tapi mulai dr komamura, indexnya beda. komamura 9, kyoraku 10, tousen 11, dst
enum gotei {genryusai, soifon, gin, unohana, hirako, byakuya, komamura = 9, kyoraku, tousen, hitsugaya, zaraki, ukitake};


int main()
{   
    warna kain;
    gotei kapten;
    
    
    std::cout << "================ Warna ============== \n" << std::endl;

    kain = hijau;
    std::cout << kain << std::endl;

    kain = merah;
    std::cout << kain << std::endl;

    kain = putih;
    std::cout << kain << std::endl;

    std::cout << "================ Gotei 13 ============== \n" << std::endl;
    
    kapten = unohana;
    std::cout << kapten << std::endl;

    kapten = hirako;
    std::cout << kapten << std::endl;

    kapten = byakuya;
    std::cout << kapten << std::endl;

    kapten = komamura;
    std::cout << kapten << std::endl;

    kapten = kyoraku;
    std::cout << kapten << std::endl;

    kapten = tousen;
    std::cout << kapten << std::endl;

    std::cout << "================ enum bisa pakai if ============== \n" << std::endl;

    kapten = soifon;
    if (kapten == soifon)
    {
            std::cout << "gotei 13 divisi 2" << std::endl;
    }
    


    std::cin.get();
    return 0;
}
