#include<iostream>
#include<cstring>

using namespace std;

char* reverse(const char* a) {

    int n = strlen(a);

    char* c = new char [n];

    for(int i = 0; i <= n - 1; i++)
        c[i] = a[n - i - 1];

    return c;
}

char* delete_char(const char* a, const char* c){

    int n = strlen(a), j = 0, checkRight = 0;

    char* p = new char [n];

    for(int i = 0; i < n; i++){
        if(a[i] != c[0]){
            p[j] = a[i];
            j++;
        }
        else checkRight++;
    }

    p[ n - checkRight ] = '\0';

    return p;
}

char* pad_right(const char* a, int n){
    int lenN = strlen(a);
    char* c = new char [max(lenN, n)];

    for(int i = 0; i < n; i++){
        c[i] = a[i];
    }

    if(lenN < n){
        for(int i = lenN; i < n; i++){
            c[i] = '_';
        }
    }

    return c;
}

char* pad_left(const char* a, int n){
    int lenN = strlen(a);
    char* c = new char [max(lenN, n)];
    if(lenN < n) {
        for(int i = 0; i < n - lenN; i++){
            c[i] = '_';
        }
        int j = 0;
        for(int i = n - lenN; i < n; i++){
            c[i] = a[j];
            j++;
        }
    }
    else {
        for(int i = 0; i < lenN; i++)
            c[i] = a[i];
    }

    return c;
}

char* truncate(const char* a, int n){

    int lenN = strlen(a);
    int z = min(lenN, n);
    char* c = new char [z];
    for(int i = 0; i < z; i++){
        c[i] = a[i];
    }

    return c;
}

bool is_palindrome(char a[]){
    int n = strlen(a);
    for(int i = 0; i < n/2; i++) {

        if( a[ i ] != a[ n-i-1 ] )
            return true;
    }
    return false;
}

char* trim_left(const char* a){
    int n = strlen(a);
    int j = 0;

    for(int i = 0; i < n; i++){
        if(a[i] != ' '){
            j = i;
            break;
        }
    }

    char* c = new char [n - j - 1];
    for(int i = j; i < n; i++){
        c[i - j] = a[i];
    }

    return c;
}

char* trim_right(const char* a){
    int n = strlen(a);
    int j = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == ' '){
            j = i - 1;
            break;
        }
    }

    char* c = new char [j];
    for(int i = 0; i <= j; i++){
        c[i] = a[i];
    }

    return c;
}

int main(){
    char s1[] = "laptrinhnangcao";
    char s2[] = "    nangcao";
    char s3[] = "laptrinh    ";

    /*cout << reverse(s1) << endl;
    cout << delete_char(s1, "i") << "\n";
    cout << pad_right(s1, 15) << "\n";
    cout <<pad_left(s1, 15) << "\n";
    cout << truncate(s1, 6) << "\n";
    if(is_palindrome(s1) == 1)
        cout << "false\n";
    else 
        cout << "true\n";
    cout << trim_left(s2) << "\n";
    cout << trim_right(s3) << "\n";
    */

}