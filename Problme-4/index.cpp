/*
4 Number Problem Solving
********************************

The two numbers need to be swapped without using the third variable?
তৃতীয় ভেরিয়েবল ব্যবহার না করে দুটি সংখ্যা অদলবদল করতে হবে?
*/

#include<iostream>
using namespace std;

int main(){

    int a = 50;
    int b = 15;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "Swap two numbers : " << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    return 0;
}
