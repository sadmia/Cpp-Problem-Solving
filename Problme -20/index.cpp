/*
20 Number Problem Solving
********************************

Find the sum and average of the three numbers?
লুপ ব্যবহার করে একটি সংখ্যার পাওয়ার খুঁজে বের করতে হবেতিনটি সংখ্যার যোগফল এবং গড় খুঁজে বের করতে  হবে*/


#include<iostream>
using namespace std;

int main(){

    int input1, input2, input3, average, sum;

    cout << "Enter Three Number Input : ";
    cin >> input1 >> input2 >> input3;

    sum = input1 + input2 + input3;

    average = sum / 3;

    cout << "\nThe SUM of 3 Numbers : " << sum << endl;
    cout << "\nThe Average of 3 Numbers : " << average << endl;

    return 0;
}
