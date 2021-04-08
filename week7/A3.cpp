#include<iostream>
using namespace std;

void count_even(int *p, int sizeOfArray){
    int firstSegment = 0, secondSegment = 0;

    for(int i = 0; i < sizeOfArray/2; i++){
        if(*(p+i) % 2 == 0) {
            firstSegment++;
        }
    }
    for(int i = sizeOfArray/2 + 1; i < 10; i++) {
        if(*(p+i) % 2 == 0){
            secondSegment++;
        }
    }
    cout << firstSegment << " " << secondSegment;
}

int main(){
    int f[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int *p;
    p = &(*f);

    count_even(p, 10);

    return 0;
}