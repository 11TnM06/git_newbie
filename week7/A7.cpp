#include<iostream>
#include<cstring>

using namespace std;

int checkAppearance(char charArrayFirst[], char charArraySecond[]){
    int cnt = 0, res = 0;
    int i = 0, j = 0;
    if(strcmp(charArrayFirst, charArraySecond) >  0)
        return -1;

    while(charArraySecond[i] != '\0') {
        if(charArrayFirst[j] == charArraySecond[i]){
            j++;
            res++;
        }
        if(res == strlen(charArrayFirst)){
            cnt++;
            j = 0;
            res = 0;
        }
        i++;
    }

    return cnt;

}

int main(){
    char charArrayFirst[50], charArraySecond[50];
    cin >> charArrayFirst >> charArraySecond;

    cout << checkAppearance(charArrayFirst, charArraySecond);
    return 0;
}