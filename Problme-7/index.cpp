/*
4 Number Problem Solving
********************************

Write a C++ Program to Display ASCII Value of a Character?
একটি অক্ষরের ASCII মান প্রদর্শন করতে একটি C++ প্রোগ্রাম লিখুন?
*/


#include<iostream>
using namespace std;

int main(){

    char input;
    cout << "Enter Charter Input : ";
    cin >> input;
    cout << endl << "Charter ASCII Value : " << int(input) << endl;

    return 0;
}
