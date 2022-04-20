/*
4 Number Problem Solving
********************************

Create random numbers between 0 and 100?
0 এবং 100 এর মধ্যে এলোমেলো সংখ্যা তৈরি করুন?
*/


#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

    int randomNumber;
    int i;

    cout << "Generating Random Numbers : " << endl << endl;
    for(i=1;i<=10;i++){
        randomNumber = rand()%100;
        cout << " " << randomNumber << " ";
    }

    cout << endl;

    return 0;
}
