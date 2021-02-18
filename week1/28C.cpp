#include <iostream>

using namespace std;

int main () {

    int time = 0;

    for(int i = 0; i < 24; ++i) {
        if(i == 0) {
            cout << "12 midnight\n";
            continue;
        }
        if(i == 12) {
            cout << "12 noon\n";
            time = 1;
            continue;
        }
        if(!time) cout << i%12 << "am\n";
        if(time) cout << i%12 << "pm\n";
    }
}
