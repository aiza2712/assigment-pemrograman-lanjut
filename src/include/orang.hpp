#pragma once
#include <string>

namespace sim {
    class Orang {
        protected:
            std::string nama;
            int umur;
        public:
            Orang(std::string nama, int umur);
            std::string getNama();
            int getUmur();
            virtual void tampilInfo();
    };
}