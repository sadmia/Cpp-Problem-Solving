/*
14 Number Problem Solving
********************************

Check whether the letter is upper case or lower case, number or special?
অক্ষরটি বড় হাতের না ছোট হাতের, অঙ্ক বা বিশেষ কিনা তা পরীক্ষা করতে হবে?
*/


#include<iostream>
using namespace std;

class problem{
public:

    char ch;

    void input(){
        cout << "Enter any character to check : ";
        cin >> ch;
    }

    void concat(){

        if (ch >= 65 && ch <=90) {
            cout << "\nThe Entered Character (" << ch << ") is an UPPERCASE character.\n";
        } else if (ch >= 48 && ch <= 57) {
            cout << "\nThe Entered Character (" << ch << ") is a DIGIT.\n";
        } else if (ch >= 97 && ch <= 122) {
            cout << "\nThe Entered Character (" << ch << ") is a LOWERCASE character.\n";
        } else {
            cout << "\nThe Entered Character (" << ch << ") is an SPECIAL character.\n";
        }

    }

};


int main(){

    problem obj;
    obj.input();
    obj.concat();

    return 0;
}
