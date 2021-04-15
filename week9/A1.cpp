#include <iostream>
#include <cstring>

using namespace std;

char* concat(const char* a, const char* b) {
    int n = strlen(a) + strlen(b);
    char ch = '\0';
    char* c = new char[n];
    *c = ch;

    strcat(c, a);
    strcat(c, b);

    return c;
}

int main() {
    char str1[] = "abc";
    char* a = str1;
    char str2[] = "xyz";
    char* b = str2;
   
    cout << concat(a, b);
}