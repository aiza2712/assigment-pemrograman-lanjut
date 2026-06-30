#include <iostream>
#include "include/mahasiswa.hpp"

using namespace std;

namespace sim {
    Mahasiswa::Mahasiswa(string nama, int umur, string nim, string jurusan)
        : Orang(nama, umur), nim(nim), jurusan(jurusan) {}

    void Mahasiswa::tambahMatkul(string matkul) {
        matkul_diambil.push_back(matkul);
    }

    string Mahasiswa::getNim() { return nim; }
    string Mahasiswa::getJurusan() { return jurusan; }
    vector<string> Mahasiswa::getMatkulDiambil() { return matkul_diambil; }

    void Mahasiswa::tampilInfo() {
        cout << "=== Mahasiswa ===" << endl;
        Orang::tampilInfo();
        cout << "NIM     : " << nim << endl;
        cout << "Jurusan : " << jurusan << endl;
        cout << "Matkul  : ";
        for (auto& m : matkul_diambil) cout << m << " ";
        cout << endl;
    }
}