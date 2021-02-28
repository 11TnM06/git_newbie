#include <iostream>

using namespace std;

void runSectionA(string& s) {
    for (int i = 0; i < s.size() - 1; ++i) {
        cout << s[i];
    }

    cout << "\n";
    cout << s << "\n\n";

}

void runSectionB(string& s) {
    for (int i = 0; i < s.size(); ++i) {
        cout << s[i];
    }

    cout << "\n";
    cout << s << "\n\n";

}
int main () {

    string s;
    /// Section A
    runSectionA(s); /// in ra kết quả khác nhau

    /// Section B
    cin >> s;

    runSectionB(s); /// in ra kết quả giống nhau


}
