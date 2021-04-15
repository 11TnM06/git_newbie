#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int *ptr = new int; 
    *ptr = 10; 
 
    delete ptr; // Trả lại vùng nhớ cho hệ điều hành, lúc này địa chỉ của ptr đang không được quản lí bởi người dùng.
 
    cout << *ptr; // Sử dụng 1 con trỏ đang không nằm trong phạm vi quản lí khiến chương trình bị treo
 
    return 0;
}
