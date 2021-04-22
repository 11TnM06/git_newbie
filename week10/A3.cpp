#include<iostream>

using namespace std;

struct Point{
    double x;
    double y;
};

void mid_point(const Point p, const Point p_){
    cout  << (p.x + p_.x) / 2 << " " << (p.y + p_.y) / 2 << "\n";
}

int main(){
    Point p, p_;

    p.x = 11; 
    p.y = 9;

    p_.x = 6; 
    p_.y = 3;

    mid_point(p, p_);

    return 0;
}