#include <iostream>

using namespace std;

const int N = 4;
//const int M = 3;
const int M = 5;
/// Section A
int Array_Of_SectionA_a[N];

/// Section B

int Array_Of_SectionB_a[M] = {1, 2, 3, 4};

/// Section C

int Array_Of_SectionC_a[] = {1, 2, 3, 4};

int main () {
    int Array_Of_SectionA_b[N];
    int Array_Of_SectionB_b[M];
    int Array_Of_SectionC_b[] = {1, 2, 3, 4};
    ///Section A
    for (int i = 0; i < N; ++i) {
        cout << Array_Of_SectionA_a[i] << " ";
    }

    cout << "\n";

    for (int i = 0; i < N; ++i) {
        cout << Array_Of_SectionA_b[i] << " ";
    }

    cout << "\n\n";

    ///Section B

    for (int i = 0; i < N; ++i) {
        cout << Array_Of_SectionB_a[i] << " ";
    }

    cout << "\n";

    for (int i = 0; i < N; ++i) {
        cout << Array_Of_SectionB_b[i] << " ";
    }

    cout << "\n\n";

    ///Section C
    for (int i = 0; i < N; ++i) {
        cout << Array_Of_SectionC_a[i] << " ";
    }

    cout << "\n";

    for (int i = 0; i < N; ++i) {
        cout << Array_Of_SectionC_b[i] << " ";
    }

    cout << "\n\n";



}
