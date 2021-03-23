#include <iostream>

using namespace std;

const int N = 30;

int positionValue[N];
int countAppearanceOfChar[N];
void cal(int k) {
    bool ok = true;
    for ( int i = 1; i <= k; ++i) {
        countAppearanceOfChar[positionValue[i]] ++;
        if(countAppearanceOfChar[positionValue[i]] > 1 || positionValue[i] < positionValue[i - 1]) {
            ok = false;
            break;
        } 
    }

    if(ok) {
        for ( int i = 1; i <= k; ++i ) {
            char x = 'a' + positionValue[i];
            cout << x << " ";
        }
        cout << "\n";

    }
    
    for ( int i = 1; i <= k; ++i ) {
        countAppearanceOfChar[positionValue[i]] = 0;
    }
    for ( int i = 1; i <= k; ++i ) {
        //cout << positionValue[i] << " ";
    }
}
void solve( int n, int k, int i ) {
    if( i == k + 1) cal(k);
    else {
        for ( int j = 0; j < n; ++j ) {
            positionValue[i] = j;
            solve(n, k , i + 1);
        }
    }
}
int main() {
    int n, k;
    cin >> n >> k;

    if( n < k ) 
        cout << "Wrong Input\n";
    else 
        solve(n, k, 1);
}