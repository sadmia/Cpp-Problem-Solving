/*
13 Number Problem Solving
********************************

Days need to be converted into weeks and days into years?
দিনগুলিকে সপ্তাহ এবং দিনগুলিকে বছরে রূপান্তর করতে হবে?
*/


#include<iostream>
using namespace std;

class problem{
public:
    int year,day,weeks,manth;
    void input(){
        cout << "Enter Day Number : ";
        cin >> day;
    }

    void output(){
        year = day / 365;
        day = day % 365;
        manth = day / 30;
        day = day % 30;
        weeks = day / 7;
        day = day % 7;

        cout << endl << "Year : " << year << endl;
        cout << "Manth : " << manth << endl;
        cout << "Weeks : " << weeks << endl;
        cout << "Day : " << day << endl;
    }
};

int main(){

    problem obj;
    obj.input();
    obj.output();

    return 0;
}
