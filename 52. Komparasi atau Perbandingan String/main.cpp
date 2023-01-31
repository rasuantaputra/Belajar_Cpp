#include <iostream>
#include<string>

using namespace std;

void perbandinganString1();
void perbandinganString2();

int main()
{
    // perbandinganString();
    perbandinganString2();

    return 0;
}


void perbandinganString1(){

    /* perbandinan string seperti ini tidak bisa
       Mangkana pakai library
    */

    char kata[4] = {'u', 'c', 'u', 'p'};
    char pembanding [4] = {'u', 'c', 'u', 'p'};

    if (kata == "ucup"){
        cout << "Berhasil !!!" << endl;
    }

    if (kata == pembanding){
        cout << "Berhasil !!!" << endl;
    }
}

void perbandinganString2(){

    /* perbandinan string menggunakan library
    */

    string input;
    string nama_rahasia("ucup");

    while(true){
        cout << "Tebak Nama : ";
        cin >> input;
        cout << input;

        if (input == nama_rahasia){
            cout << "Tebakan anda benar !!!" << endl;
            break;
        }

        cout << "Tebakan anda salah !!!" << endl;
    }
    cout << "Program selesai" << endl;
}
