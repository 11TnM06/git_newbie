#include <iostream>

using namespace std;

int main () {
    int x, y, z;

    cin >> x >> y >> z;

    bool b = false;

    if(x >= y && y >= z) b = true;
    if(x <= y && y <= z) b = true;

    cout << b;
}
