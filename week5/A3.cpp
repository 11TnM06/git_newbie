#include <iostream>

using namespace std;
void doubleX_1(int x) {
    x *= 2;
    cout << "x = " << x << " at " << &x << "\n"; 
}
void doubleX_2(int &x) {
    x *= 2;
    cout << "x = " << x << " at " << &x << "\n";
}
int main() {
    int x;
    cin >> x;

    cout << "Origin x = " << x << " at " << &x << "\n";

    doubleX_1(x); // pass by value
    doubleX_2(x); // pass by reference 
}