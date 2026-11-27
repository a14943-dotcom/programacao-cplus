#include <iostream>

using namespace std;

int main() {
    string myNames[] = {"lucas", "ruben", "armando", "andre"};

    for (string nomes : myNames) {
        cout << nomes << "\n";
    }
}
