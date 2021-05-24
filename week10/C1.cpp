#include <iostream>
#include <cstring>

using namespace std;

struct String{
    int len;
    char* str = NULL;

    String(const char* _str){
        int len = strlen(_str);
        str = new char [len];
        str = NULL;
        strncpy(str, _str, len);
    }

    ~String(){
        delete [] str;
    }

    void print(){
        cout << str << "\n";
    }

    void append(const char* s){
        int n = strlen(s);
        char* tmp = new char [n];
        tmp = NULL;
        
        strcat(tmp, str);
        strcat(tmp, s);
        str = tmp;

        delete [] tmp;
    }
};



int main(){
    String s ("Hello");
    String greeting("Hi");
    greeting.append(" there");

    s.print();
    greeting.print();

    return 0;
}