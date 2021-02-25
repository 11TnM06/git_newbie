#include <bits/stdc++.h>
#include <string.h>

using namespace std;

long long C2(long long n) {
    return n*(n-1)/2;
}


int main() {
    //freopen("8C.inp","r",stdin);
    //ofstream fout(getenv("OUTPUT_PATH"));
    long long kq = 0;
    char x;
    char y;
    char z;
    long long differentRanges = 0;
    long long differentSameCharactersRanges = 0;
    int ok = 0;

    while(cin >> x) {
        if(x != y) differentRanges ++;
        if(x == y) {
            if(ok == 0) {
                ok = 1;
                differentSameCharactersRanges ++;
                //cout << x << " " << y << " " << ok << "\n";
            }
        }
        else if(differentRanges != differentSameCharactersRanges && ok == 1) ok = 0;
        if(x == z && x != y) kq --;
        z = y;
        y = x;
    }
    //cout << differentRanges << "\n";
    //cout << differentSameCharactersRanges << "\n";
    //cout << kq << "\n";
    kq += C2(differentRanges) + differentSameCharactersRanges;
    cout << kq;
}
