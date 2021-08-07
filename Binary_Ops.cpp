#include <iostream>
#include <string>

using namespace std;
int C;
void funct (string);

main(){
    int A = 60;
    int B = 13;
    C = A & B;  //bitwise AND
    funct("AND");
    C = A | B;  //bitwise OR
    funct("OR");
    C = A ^ B;  //bitwise XOR
    funct("XOR");
    C = ~A;     //bitwise compliment
    funct("Compliment");
    C = A << 1; //left shift bits
    funct("Left Shift");
    C = A >> 1; //right shift bits
    funct("Right Shift");

}

void funct (string op){
    cout << "Binary " << op << " is " << C << endl;
}