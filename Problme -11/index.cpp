/*
10 Number Problem Solving
********************************

Increase any number X from power N?
পাওয়ার N থেকে যেকোনো সংখ্যা X বাড়ান?
*/

#include<iostream>
#include<math.h>
using namespace std;

class problem{
public:
    int x,y,result;
    void input(){
        cout << "Enter Value X = ";
        cin >> x;
        cout << "Enter Value Y = ";
        cin >> y;
    }

    void output() {
        input();

        result = pow(x,y);
        cout << "\nThe Power Of Number [ " << x << " ^ " << y << " ] = " << result<<endl;
    }
};

int main(){
    problem myObj;
    myObj.output();
    return 0;
}
