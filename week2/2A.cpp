#include <iostream>

using namespace std;

void divK(int &k) {
    float x = k;

    while(x >= 3) {
        x /= 3;
    }

    cout << x;
}
int main () {
    int k;

    cin >> k;

    divK(k);
    return 0;
}
