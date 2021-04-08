#include <iostream>

using namespace std;

void f(int xval)
{
    int x;
    x = xval;
    // in địa chỉ của x tại đây

    cout << &x << "\n";
    
}
void g(int yval)
{
    int y;
    // in địa chỉ của y tại đây
    cout << &y << "\n";
}
int main()
{
    f(7);
    g(11);
    return 0;
} 

/*
    Địa chỉ của 2 biến x và y giống nhau do cả 2 biến cùng là biến địa phương và có vai trò tương đương
    nên khi thoát khỏi hàm thì biến x bị xóa và biến y được khởi tạo trong hàm g coi như có vai trò như biến x trong hàm f
    
*/