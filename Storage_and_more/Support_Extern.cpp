#include <iostream>

extern int count; //variable came from Storage_and_more.cpp

int write_extern(void){
    std::cout << "extern Count is " << count << std::endl;
    return 50;
}