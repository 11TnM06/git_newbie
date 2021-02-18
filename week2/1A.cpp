#include <iostream>
using namespace std;

void runPartA() {
    for (int i = 0; i <= 100; i += 2) {
        cout << i << " ";
    }
    cout << "\n";
}

void runPartB() {
    int i = 0;

    while(i <= 100) {
        cout << i << " ";
        i += 2;
    }

    cout << "\n";
}

void runPartC() {
    for (int i = 0; i <= 100; ++i) {
        if((i&1) == 0) cout << i << " ";
    }

    cout << "\n";
}

void runPartD() {
    int i = 0;

    while(true) {
        cout << i << " ";
        if(i >= 100) break;
        i += 2;
    }

    cout << "\n";
}

void runPartE() {
    for (int i = 0; i <= 100; ++i) {
        if(i&1) continue;
        cout << i << " ";
    }

    cout << "\n";
}
int main () {
    runPartA();
}
