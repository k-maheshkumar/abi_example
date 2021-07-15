#include "mylib.hpp"
#include <iostream>

MyLib::MyLib(int old_field) : old_field(old_field)
{
    std::cout << "hello v2_bad \n"; 
}

int MyLib::get() 
{ 
    print(); 
    return old_field;
}

void MyLib::print()
{ 
    std::cout << "v2_bad - old_field: " << old_field << "\n";
}