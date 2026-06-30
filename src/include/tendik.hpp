#pragma once
#include <string>
#include "orang.hpp"

namespace sim {
    class Tendik : public Orang {
        private:
            std::string nip;
            std::string jabatan;
            std::string divisi;
            std::string status_kepegawaian;
        public:
            Tendik(std::string nama, int umur, std::string nip, std::string jabatan, std::string divisi, std::string status_kepegawaian);
            std::string getNip();
            std::string getJabatan();
            std::string getDivisi();
            std::string getStatusKepegawaian();
            void tampilInfo() override;
    };
}