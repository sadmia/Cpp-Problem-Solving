/*
19 Number Problem Solving
********************************

Find the power of a number using a loop?
লুপ ব্যবহার করে একটি সংখ্যার পাওয়ার খুঁজে বের করতে হবে?
*/


#include<iostream>
using namespace std;

int main(){

    int input, result = 1, power, i;

    cout << "Enter base of a number : ";
    cin >> input;
    cout << "Power of a Number [ " << input << " ] = ";
    cin >> power;

    for(i = power; i > 0; i--) {
        result = result * input;
    }

    cout << "\nEnter power to a base [ " << input << " ^ " << power << " ] = " << result << endl;


    return 0;
}
