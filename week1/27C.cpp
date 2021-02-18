#include <iostream>

using namespace std;

int main () {
    while(true) {
        int N;

        cin >> N;

        if(N == -1) {
            cout << "Bye";
            break;
        }

        if(N >= 0 && N%5 == 0) cout << N << "\n";
        else {
            cout << "-1";
            break;
        }
    }
}
