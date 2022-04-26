/*
18 Number Problem Solving
********************************

Print the multiplication table of the given number?
প্রদত্ত সংখ্যার গুণন সারণী প্রিন্ট করতে হবে?
*/


#include<iostream>
using namespace std;

int main(){

    int i, inputVlu, result = 1;

    cout << "Enter any positive number : ";
    cin >> inputVlu;
    cout << endl;

    for(i = 1; i <= 10; i++){
        result = inputVlu * i;

        cout << inputVlu << " * " << i << " = " << result << endl;
    }

    return 0;
}
