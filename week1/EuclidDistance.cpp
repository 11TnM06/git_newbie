#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    float x, y, u, v;
    cin >> x >> y >> u >> v;

    float kq = sqrt((x - u)*(x - u) + (y - v)*(y - v));

    cout << kq;
}

