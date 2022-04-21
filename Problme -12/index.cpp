/*
10 Number Problem Solving
********************************

You have to add two numbers?
দুটি সংখ্যার সংযোজন করতে হবে ?
*/


#include<iostream>
using namespace std;

class addtion{
public:
    int a,b,result;
    void input(){
        cout << "Enter Two Number : ";
        cin >> a >> b;
    }
    void output(){
        input();
        result = a + b;
        cout << endl << "Sum Number : " << result << endl;
    }
};

int main(){
    addtion obj;
    obj.output();
    return 0;
}
