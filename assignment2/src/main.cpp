#include <iostream>
#include <string>

#include "include/orang.hpp"
#include "include/dosen.hpp"
#include "include/mahasiswa.hpp"
#include "include/tendik.hpp"

using namespace std;
using namespace sim;

int main(int argc, char ** argv)
{
   Mahasiswa mhs("Aiza", 20, "5024241036", "Teknik Komputer");
    mhs.tambahMatkul("Pemrograman Lanjut");
    mhs.tambahMatkul("Basis Data");
    mhs.tampilInfo();

    cout << endl;

    Dosen dsn("Dr. Budi", 45, "NIP001");
    dsn.tambahMatkul("Pemrograman OOP");
    dsn.tampilInfo();

    cout << endl;

    Tendik tdk("Siti", 35, "NIP002", "Staff", "Akademik", "PNS");
    tdk.tampilInfo();
 

    return 0;
}