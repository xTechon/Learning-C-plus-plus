#include <iostream>
#include <string>

using namespace std;
int C;
void funct (string);
/**
 * "Function declaration is required when you define 
 * a function in one source file and you call that 
 * function in another file. In such case, you should 
 * declare the function at the top of the file calling 
 * the function."
 */


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

    //test to see if function has to  be declared at beginning like C
    C = max(A,B); 
    funct("test");
}

void funct (string op){
    cout << "Binary " << op << " is " << C << endl;
}

int max (int num1, int num2){
    int result;
    (num1 > num2) ? (result = num1) : (result = num2); //if else statment
    return result;  
}