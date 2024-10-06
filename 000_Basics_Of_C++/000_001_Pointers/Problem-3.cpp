#include <iostream>

int main() {
    int a = 10;
    int *p;
    p = &a;
    std::cout << *p << std::endl; //  Dereferencing the pointer
    // Result: 10

    std::cout << *p + 1 << std::endl;
    // Results: 11

    std::cout << *(p + 1) << std::endl; //  You expect for the result to be 11? you are wrong!
    /* Result: 1873899776

       Reason: *(p + 1) dereferences the memory location 4 bytes after a.
       Since there is no guarantee that any valid data is stored at that location (i.e., no variable has been declared there in your program),
       you are essentially accessing uninitialized memory.
       This leads to undefined behavior.
       As a result, the value at *(p + 1) could be 0, some garbage value,
       or anything else depending on the state of memory.
    */

    return 0;
}
