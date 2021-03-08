#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

bool check(string x, string y) {
    reverse(y.begin(),y.end());
    if(x == y) return true;
    else return false;
}
int main() {
    int n;
    cin >> n;
    string s[101];

    for(int i = 0 ;i < n; ++i) {
        cin >> s[i];
    }

    string x = "";

    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j < n; ++j) {
            if(check(s[i], s[j]))
                x = s[i];
        }
    }

    cout << x.size() << " " << x[x.size()/2] << "\n";

}
