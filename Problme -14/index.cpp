/*
14 Number Problem Solving
********************************

Find out if the given number is odd or even?
প্রদত্ত সংখ্যাটি বিজোড় নাকি জোড় তা খুঁজে বের করুন?
*/


#include<iostream>
using namespace std;

class problem{
public:
    int inp;
    void input(){
        cout << "Enter any positive number : ";
        cin >> inp;
    }

    void output(){

        if(inp % 2 == 0) {
            cout << "\nThe Entered Number " << inp << " is Even Number.\n";
        } else {
            cout << "\nThe Entered Number " << inp << " is Odd Number.\n";
        }

    }
};

int main(){

    problem myObj;
    myObj.input();
    myObj.output();

    return 0;
}
