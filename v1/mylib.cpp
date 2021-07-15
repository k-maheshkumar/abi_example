#include "mylib.hpp"
#include <iostream>

MyLib::MyLib(int old_field) : old_field(old_field)
{
    std::cout << "v1 - old_field: " << old_field << "\n";
}

int MyLib::get() { return old_field;}