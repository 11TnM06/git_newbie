#include <iostream>

using namespace std;

// Sử dụng vòng lặp
void searchBinary_1(int key, int a[], int low, int high) {
    int position = -1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(a[mid] == key) {
            position = mid;
            break;
        }
        else if(a[mid] > key)  high = mid - 1;
        else low = mid + 1;
    }

    if(position == -1) cout << "Can not find position of key in Array a\n";
    else cout << position << "\n";
}
// Dùng đệ quy
int searchBinary_2(int key, int a[], int low, int high) 
{ 
    if (low <= high) { 
        int mid = low + (high - low) / 2; 
        if (a[mid] == key) 
            return mid; 
        if (a[mid] > key) 
            return searchBinary_2(key, a, low, mid - 1); 
  
        return searchBinary_2(key, a, mid + 1, high); 
    } 
  
    return -1; 
} 
int main() {
    int a[] = {1, 7, 10, 11, 15, 19, 23, 25, 50};

    int valueOfKey[] = {5, 1, 50, 15, 19};
    for (int i = 0; i < 5; ++i) {
        searchBinary_1(valueOfKey[i], a, 0, 8);
    }

    for (int i = 0; i < 5; ++i) {
        if(searchBinary_2(valueOfKey[i], a, 0, 8) == -1) 
            cout << "Can not find position of key in Array a\n";
        else cout << searchBinary_2(valueOfKey[i], a, 0, 8) << "\n";
    }
}