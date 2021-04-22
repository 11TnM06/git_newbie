#include <iostream>

using namespace std;

struct Point{
    int n;
    int Arr[100];
};

void print(Point p){

    for(int i = 0; i < p.n; ++i) {
        cout << p.Arr[i] << " ";
    }
}

int main(){

    Point p;

    p.n = 100;
    
    for(int i = 0; i < p.n; ++i) {
        p.Arr[i] = i;
    }

    print(p);

    return 0;
}