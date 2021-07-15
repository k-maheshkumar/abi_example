#include <iostream>
#include <cassert>

#include "mylib.hpp"

int main(void) {
    MyLib myobject(1);
    assert(myobject.get() == 1);
    return EXIT_SUCCESS;
}
