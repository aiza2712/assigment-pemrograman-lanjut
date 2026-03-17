#include <iostream>
#include <string>

using namespace std;

int main(int argc, char ** argv) {
    string name;

    cout << "what is your name??";
    getline (cin, name),
    cout << "hello, " << name << "!" << endl;

    return 0;
}