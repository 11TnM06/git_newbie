#include <iostream>

using namespace std;

struct Point{
    int x;
    int y;
};

void printValue(Point p){
    cout << "Pass by value: " << &p << "\n";
}

void printReference(Point &p){
    cout << "Pass by reference: " << &p << "\n";
}

int main(){

    Point p;
    p.x = 1; 
    p.y = 2;

    cout << "Address of p: " << &p << endl;
    printValue(p); 
    printReference(p);

    return 0;
}