#include <iostream>


void funct (void);      //declare function
static int scount = 10; //test global static int
int count = 10;         //test global int
void funct2 (void);
extern int write_extern();

main () {
    while (scount--){
        funct();
    }
    std::cout << "trying normal count now..." << std::endl;
    while (count--){
        funct2();
    }
    //had to use git bash terminal in windows to get this work.
    //VS code had problems compiling more than two files and 
    //I did not want to spend an hour figuring out how to make it work.
    count = write_extern();
    std::cout << "return count is " << count << std::endl;
}

void funct(void) {
    static int mount = 5; //this mount variable will increment in the while loop
    //auto int month;
    register int counter = 6; //variable that might be stored in a cpu register
    mount++;
    std::cout << "i is " << mount;
    std::cout << " and scount is " << scount << std::endl;
    return;
}

void funct2(void) {
    //the mount variable will only show 6 on each function call because it's not static
    int mount = 5; 
    mount++;
    std::cout << "i is " << mount;
    std::cout << " and count is " << count << std::endl;
    return;
}