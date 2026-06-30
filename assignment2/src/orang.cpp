#include <iostream>
#include "include/orang.hpp"

using namespace std;

namespace sim {
    Orang::Orang(string nama, int umur) : nama(nama), umur(umur) {}

    string Orang::getNama() { return nama; }
    int Orang::getUmur() { return umur; }

    void Orang::tampilInfo() {
        cout << "Nama : " << nama << endl;
        cout << "Umur : " << umur << endl;
    }
}