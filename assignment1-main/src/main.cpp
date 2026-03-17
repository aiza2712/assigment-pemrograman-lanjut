#include <iostream>
#include <string>
#include <ctime>
#include <sstream>

using namespace std;

// Umur dalam tahun
int yearsOld(tm* inputTgl, tm* currentTgl);
// Umur dalam bulan
int monthsOld(tm* inputTgl, tm* currentTgl);
// Hari dalam seminggu (Minggu, Senin, ..., Sabtu)
string dayOfDate(tm* inputTgl);

int main(int argc, char ** argv) 
{
    time_t currentTime;
    time(&currentTime);
    tm* currentTgl = localtime(&currentTime);

    // input tanggal lahir
    int yearinput, monthinput, dayinput;
    string inputstr;
    char ch;
    cin >> inputstr;
    stringstream ss(inputstr);
    ss >> dayinput >> ch >> monthinput >> ch >> yearinput;

    tm* inputTgl = new tm();
    inputTgl->tm_year = yearinput - 1900;
    inputTgl->tm_mon  = monthinput - 1;
    inputTgl->tm_mday = dayinput;

    int ageOfYear = yearsOld(inputTgl, currentTgl);
    int ageOfMonth = monthsOld(inputTgl, currentTgl);
    string dayName = dayOfDate(inputTgl);

    cout << ageOfYear << " " << ageOfMonth << " " << dayName << endl;

    delete inputTgl;
    return 0;
}

//*********************************************************************************************************************
int yearsOld(tm* inputTgl, tm* currentTgl)
{
    int year = (currentTgl->tm_year - inputTgl->tm_year);
    if (currentTgl->tm_mon < inputTgl->tm_mon) {
        year--;
    }
    return year;
}
//*********************************************************************************************************************
int monthsOld(tm* inputTgl, tm* currentTgl)
{
    int bulan = (currentTgl->tm_year - inputTgl->tm_year) * 12 + (currentTgl->tm_mon - inputTgl->tm_mon);
    if (currentTgl->tm_mday < inputTgl->tm_mday) {
        bulan--; // belum sampai tanggal lahir bulan ini
    }
    return bulan;
}
//*********************************************************************************************************************
string dayOfDate(tm* inputTgl)
{
    static const string hari[] = {"Minggu","Senin","Selasa","Rabu","Kamis","Jumat","Sabtu"};
    tm temp = *inputTgl; 
    mktime(&temp);      
    return hari[temp.tm_wday];
}