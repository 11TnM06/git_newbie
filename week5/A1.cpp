#include <iostream>

using namespace std;

int main() {
    int x = 5;
    int y = 6;
    char ch = 'g';
    int a[3] = {6, 12, 18};
    int res = 15;
    char b[3] = {'x', 'b', 'z'};
    int z = 9;
    char c = 'l';

    //cout << &x << ' ' << &y << " " << (void*)&ch << '\n'; 
    for (int i = 0; i < 3; i++) 
        cout << &a[i] << " ";
    cout << "\n";
    for (int i = 0; i < 3; i++)
        cout << (void*)&b[i] << " ";
    cout << "\n";
    //cout << &z << " " << (void*)&c << "\n";
}

/**
 * Mỗi 1 phần tử int chiếm 4 byte bộ nhớ 
 * Mỗi 1 phần tử char chiếm 1 byte bộ nhớ 
 **/ 