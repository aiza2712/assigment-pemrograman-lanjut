#include <iostream>
#include "include/tendik.hpp"

using namespace std;

namespace sim {
    Tendik::Tendik(string nama, int umur, string nip, string jabatan, string divisi, string status_kepegawaian)
        : Orang(nama, umur), nip(nip), jabatan(jabatan), divisi(divisi), status_kepegawaian(status_kepegawaian) {}

    string Tendik::getNip() { return nip; }
    string Tendik::getJabatan() { return jabatan; }
    string Tendik::getDivisi() { return divisi; }
    string Tendik::getStatusKepegawaian() { return status_kepegawaian; }

    void Tendik::tampilInfo() {
        cout << "=== Tendik ===" << endl;
        Orang::tampilInfo();
        cout << "NIP                : " << nip << endl;
        cout << "Jabatan            : " << jabatan << endl;
        cout << "Divisi             : " << divisi << endl;
        cout << "Status Kepegawaian : " << status_kepegawaian << endl;
    }
}