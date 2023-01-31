#include <iostream>
#include <string>

using namespace std;

int main()
{
    /* char kata[5] = {'m', 'o', 'b', 'i', 'l'};
        kalo gini stringnya fix, gabisa ditambahin
        jadi harus pake library biar keren
    */

    // string di sini adalah library, jadi harusnya pake std::
    string kata("cat");
    cout << kata << endl;

    string data;
    cout << "Masukan kata : " << endl;
    cin >> data;
    cout << data << endl;
    return 0;
}
