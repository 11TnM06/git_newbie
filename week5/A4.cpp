#include <iostream>

using namespace std;
// Array a use pass by value
void doSectionA_1(int a[]) {
    cout << &a << "\n";
}
/* lỗi không pass by reference được
void doSectionA_2(int &a[] ) { 
    cout << &a << "\n";
}
*/
// String s pass by reference
void doSectionB_1(string &s) {
    cout << &s << "\n";
}
// String s pass by value
void doSectionB_2(string s) {
    cout << &s << "\n";
}
int main() {
    int a[3] = {15, 21, 27};
    string s = "HelloWorld";

    cout << "Origin address of Array a = " << &a << "\n";

    cout << "Origin address of String s = " << &s << "\n";
    
    doSectionA_1(a);
    //doSectionA_2(a);
    doSectionB_1(s);
    doSectionB_2(s);

}