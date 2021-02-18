#include <iostream>

using namespace std;

int main () {
    int n;
    const int N = 1e3 + 5;
    int a[N];

    cin >> n;

    float Mean = 0;
    int mi = 1e9;
    int ma = -1e9;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if(mi > a[i]) mi = a[i];
        if(ma < a[i]) ma = a[i];
        Mean += a[i];
    }

    cout << "Mean: " << Mean/n << "\n";
    cout << "Max: " << ma << "\n";
    cout << "Min: " << mi << "\n";
}
