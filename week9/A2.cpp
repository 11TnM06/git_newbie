#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    cout << *p2;
    delete p2;
}

// Chương trình chạy không lỗi.