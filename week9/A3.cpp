#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;
}

/*
    Chương trình chạy lỗi lệnh cerr cuối do đã delete đi con trỏ c trỏ cùng hướng tới con trỏ char a. Điều đó dẫn đến khi in ra a là trỏ đến 1 vùng nhớ mà con trỏ đang không còn quản lí
*/