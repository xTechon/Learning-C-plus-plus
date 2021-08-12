#include <iostream>

using namespace std;

int main(){

    char str[] = "Hello C++";
    char name[10];
    int overflow = 100;

    //Cout test
    cout << "value of str is : " << str << endl;

    //cin test
    //hypothesis: inputting string longer than space 
    //allocated in line 8 will overwrite the data set in line 9
    cout << "Original int: " << overflow << endl;

    cout << "enter name: ";
    cin >> name;
    cout << "your name is: " << name << endl;

    //the int may be overwritten when the string goes over limit
    cout << "int the same?: " << overflow << endl;
    //how do we controll errors?
}