#include <iostream>
#include <string.h>

using namespace std;

const int dayOfMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool checkLeapYear(int x) {
    if(x%4 ==0 && x%100 != 0 || x%100 == 0 && x%400 == 0) return true;
    return false;
}

void readInput(int& dayNew, int& monthNew, int& yearNew, char& c) {
    cin >> dayNew >> c
        >> monthNew >> c
        >> yearNew;

}

void printOutput(int& dayNew, int& monthNew, int& yearNew, char& c) {
    if(dayNew < 10) cout << "0";
    cout << dayNew << c;
    if(monthNew < 10) cout << "0";
    cout << monthNew << c
         << yearNew << "\n";

}

int convert_Date_to_Day(int& dayNew, int& monthNew, int& yearNew) {
    int amountOfDay = 0;

    for (int i = 0; i < monthNew - 1; ++i) {
        amountOfDay += dayOfMonth[i];
        if(i == 1 && checkLeapYear(yearNew)) amountOfDay += 1;
    }
    amountOfDay += dayNew;

    return amountOfDay;
}

void convert_Day_to_Date(int& dayNew, int& monthNew, int& yearNew, int amountOfDay) {
    for(int i = 0; i < 11; ++i) {
        if(i == 1 && checkLeapYear(yearNew)) {
            if(amountOfDay - dayOfMonth[i+1] - 1 < 0) break;
            dayNew = dayOfMonth[i] + 1;
            monthNew = i + 1;
            amountOfDay -= (dayOfMonth[i] + 1);
        }
        else {
            if(amountOfDay - dayOfMonth[i+1] < 0) break;
            dayNew = dayOfMonth[i];
            monthNew = i + 1;
            amountOfDay -= dayOfMonth[i];
        }
    }
    if(amountOfDay > 0) {
        dayNew = amountOfDay;
        monthNew++;
    }

}

void plusDate(int& dayNew, int& monthNew, int& yearNew, int& dayBonus) {
    int amountOfDay = convert_Date_to_Day(dayNew, monthNew, yearNew);
    amountOfDay += dayBonus;
    int dayOfYear = checkLeapYear(yearNew) ? 366: 365;
    while(amountOfDay > dayOfYear) {
        amountOfDay -= dayOfYear;
        yearNew ++;
        dayOfYear = checkLeapYear(yearNew) ? 366: 365;
    }

    convert_Day_to_Date(dayNew, monthNew, yearNew, amountOfDay);

}

void minusDate(int& dayNew, int& monthNew, int& yearNew, int& dayBonus) {
    int amountOfDay = convert_Date_to_Day(dayNew, monthNew, yearNew);
    amountOfDay = dayBonus + amountOfDay;
    int dayOfYear = checkLeapYear(yearNew - 1) ? 366: 365;
    if(amountOfDay > 0) {
        convert_Day_to_Date(dayNew, monthNew, yearNew, amountOfDay);
    }
    else {
        while(amountOfDay < 0) {
            amountOfDay += dayOfYear;
            yearNew --;
            dayOfYear = checkLeapYear(yearNew - 1) ? 366: 365;
        }
        amountOfDay = dayOfYear - amountOfDay;
        convert_Day_to_Date(dayNew, monthNew, yearNew, amountOfDay);
    }
}

void calculate_New_Date(int& dayNew, int& monthNew, int& yearNew, int& dayBonus) {
    if(dayBonus >= 0) plusDate(dayNew, monthNew, yearNew, dayBonus);
    else minusDate(dayNew, monthNew, yearNew, dayBonus);
}


void solve(int& dayInput, int& monthInput, int& yearInput, int& dayBonus, char& c) {
    readInput(dayInput, monthInput, yearInput, c);
    while(cin >> dayBonus) {
        if(dayBonus == 0) break;
        int dayNew = dayInput, monthNew = monthInput, yearNew = yearInput;
        calculate_New_Date(dayNew, monthNew, yearNew, dayBonus);

        printOutput(dayNew, monthNew, yearNew, c);
    }

}

int main () {
    //freopen("4A.inp","r",stdin);
    int dayInput, monthInput, yearInput, dayBonus = 0;
    char c;

    solve(dayInput, monthInput, yearInput, dayBonus, c);

}
