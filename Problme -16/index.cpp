/*
16 Number Problem Solving
********************************

One has to check whether it is a leap year?
একটি বছর অধিবর্ষ কিনা তা পরীক্ষা করতে হবে?
*/

#include<iostream>
using namespace std;

int main(){

    int year;
    cout << "Enter Your Leap Year : ";
    cin >> year;

    if(year % 100 == 0 && year % 400 == 0 && year % 4 == 0) {
        cout << "\nThe Entered Year " << year << " is a leap year.\n";
    } else {
        cout << "\nThe Entered Year " << year << " is a not leap year.\n";
    }

    return 0;
}
