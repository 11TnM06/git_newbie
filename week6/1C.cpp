#include<iostream>
#include<math.h>

using namespace std;

int position[20];
bool checkPosition(int i,int j){
    for(int x = 1; x < i; x++)
        if(position[x] == j || abs( x-i ) == abs(position[x] - j) )
            return false;
    return true;
}
 
void printArrayPosition(int n){
    cout << "    ";
    for (int i = 1; i <= n; i++)
        cout << i << "    ";
    cout << "\n\n";
    for(int i = 1; i <= n; i++) {
        if(i < 10) 
            cout << i << "   ";
        else 
            cout << i << "  ";
        for (int j = 1; j <= n; ++j) {
            if(position[i] == j) 
                cout << "*    ";
            else 
                cout << ".    ";
        }
        cout << "\n\n";
    }
    cout << "\n\n\n\n";
}
 
void solve(int i, int n){
    for(int j = 1; j <= n; j++){
        if( checkPosition(i,j) ){
            position[i] = j;
            if( i == n ) printArrayPosition(n);
            else {
                solve(i+1, n);
            }
            
        }
    }
}
 
int main(){
    int n;
    cin >> n;
    solve(1,n);
    return 0;
}