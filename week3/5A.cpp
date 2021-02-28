#include <iostream>
#include <random>
#include <chrono>
#include <math.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rnd(int l,int r){return l+rng()%(r-l+1);}

const int N = 31;
int a[N];
int main () {
    for (int i = 0; i < 30; ++i) {
        a[i] = rnd(1,100);
        //cout << a[i] << " ";
    }

    for ( int i = 0; i < 29; ++i ) {
        for( int j = i+1; j < 30; ++j) {
            if( a[j] < a[i] ) swap(a[i], a[j]);
        }
    }

    for ( int i = 0; i < 30; ++i )
        cout << a[i] << " ";
    return 0;
}
