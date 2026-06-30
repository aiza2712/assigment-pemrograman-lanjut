#pragma once
#include <string>
#include <vector>
#include "orang.hpp"

namespace sim {
    class Mahasiswa : public Orang {
        private:
            std::string nim;
            std::string jurusan;
            std::vector<std::string> matkul_diambil;
        public:
            Mahasiswa(std::string nama, int umur, std::string nim, std::string jurusan);
            void tambahMatkul(std::string matkul);
            std::string getNim();
            std::string getJurusan();
            std::vector<std::string> getMatkulDiambil();
            void tampilInfo() override;
    };
}