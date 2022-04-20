/*
9 Number Problem Solving
********************************

Find the sum and average of the three numbers?
তিনটি সংখ্যার যোগফল ও গড় নির্ণয় কর?
*/

#include<iostream>
using namespace std;

int main(){

    int a,b,c;

    cout << "Enter Three Number Input : ";
    cin >> a >> b >> c;

    int sum = a + b + c;
    int average = sum / 3;

    cout << "\n\nSum Number : " << sum << endl;
    cout << "Average Number : " << average << "\n\n";

    return 0;
}
