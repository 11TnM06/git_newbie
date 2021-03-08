#include <iostream>

using namespace std;

const int N = 1e5+2;

int main () {
    int t;
    cin >> t;

    while(t --) {
        int n;
        cin >> n;

        int a[N];
        int sumOfArrayFromLeft[N];
        int sumOfArrayFromRight[N];
        for (int i = 0; i <= n+1; ++i) {
            sumOfArrayFromLeft[i] = 0;
            sumOfArrayFromRight[i] = 0;
            a[i] = 0;
        }

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            sumOfArrayFromLeft[i] = sumOfArrayFromLeft[i-1] + a[i];
        }
        for (int i = n; i >= 1; i--) {
            sumOfArrayFromRight[i] = sumOfArrayFromRight[i+1] + a[i];
        }

        bool ok = 0;
        for (int i = 1; i <= n; ++i) {

            if( sumOfArrayFromLeft[i-1] == sumOfArrayFromRight[i+1] ) {
                cout << "YES\n";
                ok = 1;
                break;
            }
        }

        if(ok == 0) cout << "NO\n";

    }
}
