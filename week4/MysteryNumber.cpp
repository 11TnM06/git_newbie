#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e2 + 5;

int a[N];
int b[N];
int fre[N];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        fre[a[i]] ++;
    }
    for (int i = 0; i <= n; ++i){
        cin >> b[i];
    }

    bool ok = 0;
    int differentNumber = 0;

    for (int i = 0; i <= n; ++i) {
        ok = 0;

        for (int j = 0; j < n; ++j) {
            if( b[i] == a[j] && fre[a[j]] > 0 ) {
                ok = 1;
                fre[a[j]] --;
                break;
            }
        }

        if( ok == 0 ) {
            differentNumber = b[i];
            break;
        }
    }

    cout << differentNumber;
    return 0;
}
