#include <bits/stdc++.h>

using namespace std;

const int N = 2e4 + 2;

int main () {
    int t;
    cin >> t;

    while(t --) {
        int n;
        cin >> n;

        int* a = new int(n+1);
        int* sumOfArrayFromLeft = new int(n+2);
        int* sumOfArrayFromRight = new int(n+2);

        memset(sumOfArrayFromLeft,0 , sizeof sumOfArrayFromLeft);
        memset(sumOfArrayFromRight, 0 ,sizeof sumOfArrayFromRight);


        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            sumOfArrayFromLeft[i] = sumOfArrayFromLeft[i-1] + a[i];
            cout << sumOfArrayFromLeft[i] << " ";
        }
        cout << "\n";
        for (int i = n; i >= 1; i--) {
            sumOfArrayFromRight[i] = sumOfArrayFromRight[i+1] + a[i];
            cout << sumOfArrayFromRight[i] << " ";
        }
        cout << "\n";

        bool ok = 0;
        for (int i = 1; i <= n; ++i) {

            if( sumOfArrayFromLeft[i-1] == sumOfArrayFromRight[i+1] ) {
                cout << "YES\n";
                ok = 1;
                break;
            }
        }

        if(ok == 0) cout << "NO\n";
        delete[] sumOfArrayFromLeft;
        delete[] sumOfArrayFromRight;
        delete[] a;
    }
}
