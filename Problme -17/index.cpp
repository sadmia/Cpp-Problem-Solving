/*
17 Number Problem Solving
********************************

Find the factorial of a number using repetition and loop?
পুনরাবৃত্তি এবং লুপ ব্যবহার করে একটি সংখ্যার ফ্যাক্টরিয়াল খুঁজে বের কর?
*/

#include<iostream>
using namespace std;

int main(){

    int i,n,resunt = 1;

    cout << "Enter any positive number : ";
    cin >> n;

    for(i = 1; i <= n; i++){
        resunt = resunt * i;
    }

    cout << "\nFactorial of Number [ " << n << " ] is " << resunt << endl;

    return 0;
}
