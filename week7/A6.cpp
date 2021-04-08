#include<iostream>

using namespace std;

int main(int argc, const char * argv[]){
    cout << "Number of command-line arguements: " << argc << endl;
    for(int i = 0; i < argc; i++){
        cout << "Argument #" << i << ": _" << argv[i] << "_\n";
    }
    return 0;
}

/*
A7.exe first second 3rd
Number of command-line arguments: 4
Argument #0: _A7.exe_
Argument #1: _first_
Argument #2: _second_
Argument #3: _3rd_


A7.exe 1
Number of command-line arguments: 2
Argument #0: _A7.exe_
Argument #1: _1_


A7.exe
Number of command-line arguments: 1
Argument #0: _A7.exe_
*/
