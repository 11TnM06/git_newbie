#include <iostream>

using namespace std;

int f(int* s){
    return sizeof(s);
}
int main () {
    int a[5];

    cout << sizeof(a) << endl;

    cout << f(a) << endl;
    
}