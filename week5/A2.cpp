#include<iostream>

using namespace std;

int factorial (int x) {

    cout << "x = " << x 
         <<"  at " << &x << endl; 
    if(x < 1) return 0;
    if(x == 1) return 1;
    else return x * factorial (x - 1);

}
int main() {
    int N;
    
    cin >> N;

    cout << factorial (N) << endl;
}

/*
    địa chỉ của biến x giảm dần sau mỗi lần đệ quy hàm factorial
    stackframe của hàm đệ quy factorial : n
/*