/*
3 Number Problem Solving
********************************

Find the quotient and the remainder of the number 2?
2 সংখ্যার ভাগফল এবং অবশিষ্টাংশ সংখ্যা নির্ণয় কর?
*/

#include<iostream>
using namespace std;

int main(){

    int a = 30;
    int b = 2;
    int remainder = a / b;
    int lastRemeinder = a % b;
    cout << "Remainder Number : " << remainder << endl;
    cout << "Last Remainder Number : " << lastRemeinder << endl;

    return 0;
}
