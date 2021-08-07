#include <iostream> //headers like C

using namespace std; //namespaces are new since C

//Extern can be placed anywhere and works like function declarations
extern int a, b; //variable declaration
extern int c;
extern float f;
int funct(); //function declaration

//Main program execution
int main(){
    // '<<' similar to input in bash scripting
    // cout is for terminal I think, endl is end of line character
    cout << "Hello World, this is a test." << endl; // prints hello world

    /*
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    */
    
    /*
    //what in the world
    typedef int bugs;
    bugs gross = 2;
    //no idea if this will work... it does
    cout << "there are " << gross << " bugs" << endl;

    //I still barely undersand enumerators
    enum color {red, orange, yellow} c;
    c = orange;
    */
    //variable definition
    int a, b;
    int c;
    float f;

    //variable initalization
    a = 10;
    //b = 15;
    //int literal octal
    b = 0213; //139 decimal
    c = b + a; //result? -> 0213 (139) + 10 = 149
    //auto converts to decimal when summig
    //either converts int from octal or decimal or both are same bit value when stored
    cout << b << endl; //printed as 139
    cout << c << endl;

    f = 100.0 / 3.0;
    cout << f << endl;
    cout << "what\vare\vvertical\vtabs?"; //learned about escape characters
    return 0; //terminates main function
}

//function definition
int funct(){
    return 0;
}
/**
 * Lines still terminated with semicolons
 * multiline comments still work
 * auto format javadoc style comment blocks in vs code is a godsend
 */

/**
 * types:
 * bool
 * char
 * int
 * float
 * double
 * void
 * wchar_t (wide character) like char but made up of multiple bytes, depends on compiler
 */

/**
 * 85         // decimal
 * 0213       // octal
 * 0x4b       // hexadecimal
 * 30         // int
 * 30u        // unsigned int
 * 30l        // long
 * 30ul       // unsigned long
 */