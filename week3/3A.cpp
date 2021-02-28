#include <iostream>

using namespace std;

void runSectionA_a() {
    char daytab[2][12] = {
     {31,28,31,30,31,30,31,31,30,31,30,31},
     {31,29,31,30,31,30,31,31,30,31,30,31}
    };

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << daytab[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

}

void runSectionA_b() {
    char daytab[2][12] = {
     31,28,31,30,31,30,31,31,30,31,30,31,
     31,29,31,30,31,30,31,31,30,31,30,31
    };

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << daytab[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

}

void runSectionB_a() {
    char daytab[2][12] = {
     {31,28,31,30,31,30,31,31,30,31,30,31},
     {31,29,31,30,31,30,31,31,30}
    };

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << daytab[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

}

void runSectionB_b() {
    char daytab[2][12] = {
     31,28,31,30,31,30,31,31,30,31,30,31,
     31,29,31,30,31,30,31,31,30
    };

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << daytab[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

}

/*
void runSectionC_a() {
    char daytab[][] = {
     {31,28,31,30,31,30,31,31,30,31,30,31},
     {31,29,31,30,31,30,31,31,30,31,30,31}
    };

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << daytab[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

}

void runSectionC_b() {
    char daytab[][] = {
     31,28,31,30,31,30,31,31,30,31,30,31,
     31,29,31,30,31,30,31,31,30
    };

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << daytab[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

}

*/
int main () {
    ///Section A

    runSectionA_a();
    runSectionA_b();

    /// Section B

    runSectionB_a();
    runSectionB_b();

    /// Section C

    //runSectionC_a();
    //runSectionC_b();
}
