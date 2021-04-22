#include <iostream>

using namespace std;

struct Point {
    int x, y;
};

void print( Point p ) {
    cout << p.x << " " << p.y << "\n";
} 
int main() {
    Point p;

    p.x = 11;
    p.y = 9;

    print( p );
}