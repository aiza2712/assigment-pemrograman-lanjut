#pragma once
#include <string>
#include <vector>
#include "orang.hpp"

namespace sim {
    class Dosen : public Orang {
        private:
            std::string nip;
            std::vector<std::string> matkul_diajar;
        public:
            Dosen(std::string nama, int umur, std::string nip);
            void tambahMatkul(std::string matkul);
            std::string getNip();
            std::vector<std::string> getMatkulDiajar();
            void tampilInfo() override;
    };
}