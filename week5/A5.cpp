#include<iostream>

using namespace std;

int main() {
    int N;
    
    cin >> N;
    cout << " N = " << N << " at " << &N << "\n";

    int &referenceValue = N;
    cout << " referenceValue = " << referenceValue << " at " << &referenceValue << "\n";

    // Biến tham chiếu và biến mà nó chiếu tới là cùng 1 biến 

/* int &b;
    Không thể khai báo một tham chiếu mà chưa chiếu ngay nó tới một biến thường
*/
/* Không thể chiếu một tham chiếu tới một biến khác với đích ban đầu của nó
    
    int M;
    cin >> M;
    &referenceValue = M;
*/
    
}
