/*
10 Number Problem Solving
********************************

Convert feet yards and inches?
ফুট গজ এবং ইঞ্চি রূপান্তর?
*/

#include<iostream>
using namespace std;

int main(){

    int yards, feet, inches;
    cout << "Enter Inches to Convert : ";
    cin >> inches;

    yards = inches / 432;
    inches = inches % 432;
    feet = inches / 12;
    inches = inches % 12;

    cout << endl << "Yards : " << yards << endl;
    cout << endl << "Feet : " << feet << endl;
    cout << endl << "Inches : " << inches << endl;

    return 0;
}
