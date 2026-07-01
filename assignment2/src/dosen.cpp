#include <iostream>
#include "include/dosen.hpp"

using namespace std;

namespace sim {
    Dosen::Dosen(string nama, int umur, string nip)
        : Orang(nama, umur), nip(nip) {}

    void Dosen::tambahMatkul(string matkul) {
        matkul_diajar.push_back(matkul);
    }

    string Dosen::getNip() { return nip; }
    vector<string> Dosen::getMatkulDiajar() { return matkul_diajar; }

    void Dosen::tampilInfo() {
        cout << "=== Dosen ===" << endl;
        Orang::tampilInfo();
        cout << "NIP    : " << nip << endl;
        cout << "Matkul : ";
        for (auto& m : matkul_diajar) cout << m << " ";
        cout << endl;
    }
}