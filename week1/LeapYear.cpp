#include <iostream>

using namespace std;

bool check(int x) {
    if(x%4 ==0 && x%100 != 0 || x%100 == 0 && x%400 == 0) return true;
    return false;
}

int main() {
    int n;

    cin >> n;

    if(check(n)) cout << "true";
    else cout << "false";
}
