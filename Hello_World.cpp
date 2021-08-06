#include <iostream> //headers like C

using namespace std; //namespaces are new since C

//Main program execution
int main(){
    // '<<' similar to input in bash scripting
    // cout is for terminal I think, endl is end of line character
    cout << "Hello World, this is a test."; // prints hello world

    /*
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    */

    //what in the world
    typedef int bugs;
    bugs gross = 2;
    //no idea if this will work... it does
    cout << "there are " << gross << " bugs" << endl;
    return 0; //terminates main function
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
 * wchar_t (wide character?)
 */