#include <iostream>

using namespace std;

int main() {
    int Array[7] = {1, 2, 3, 5, 7, 9, 10};

    int l = 0, r = 4;

    int kq = -1;
    while( l <= r ) {
        int mid = (l + r)/2;
        if(*(Array + mid) == 5) {
            kq = mid;
            break;
        }
        else if ( *(Array + mid) > 5 ) {
            r = mid - 1;
        }
        else if ( *(Array + mid) < 5 ) {
            l = mid + 1;
        }
    }

    cout << kq ;
}