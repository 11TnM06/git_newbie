#include <iostream>
using namespace std;


struct Point{
    int x;
    int y;
};

void get_address(Point p) {
    cout << "address of Point: " << &p << "\n"
         << "address of x: " << &p.x << "\n"
         << "address of y: " << &p.y;
}

int main(){
    Point p;

    p.x = 1; 
    p.y = 2;

    get_address(p);

    return 0;
}


/**
 * vị trí của biến x và biến kiểu Point trùng nhau 
 * vị trí của biến y cách vị trí của biến x cũng như vị trí của biến kiểu Point 1 khoảng = bộ nhớ của kiểu dữ liệu x 
**/