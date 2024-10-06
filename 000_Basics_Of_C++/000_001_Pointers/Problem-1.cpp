#include <iostream>

int main() {
    // DECLARING:
    int a = 5;
    int *p;
    std::cout << p << std::endl;
    /* Error(not a hard error): The variable 'p' is being used without being initialized.

       Result: 0x1f0a780a0 (results may vary across devices).

       Reason: When you declare int *p;,
       the pointer is created but not initialized to any valid address.
       Pointers in C++ are not automatically set to nullptr;
       they contain garbage values until you initialize them.
       Some modern compilers may still compile this,
       the warning you get is trying to protect you from dereferencing (accessing) an uninitialized pointer later,
       which could lead to undefined behavior.
   */
    
    // GETTING THE ADDRESS OF A POINTER
    std::cout << &p << std::endl;
    /* Result: 0x16d5f2eb0 (you may ask why is it different?)
     
       Reason: The expression &p gives you the memory address where the pointer p itself is stored.
       This is different from the value p holds, which is some random address in memory.
       That's why the address printed (0x16d5f2eb0) is different from the 
       uninitialized value of p. It's showing where p is stored, not what it points to.
    */

    // INITIALIZING:
    p = &a;
    std::cout << p << std::endl;
    // Result: 0x16d5f2eb8
    // This is called initializing the pointer variable to a certain address of a variable.

    // DEREFERENCING:
    std::cout << *p << std::endl;
    /* This is called: "dereferencing"
       Dereferencing a pointer means accessing the value stored at the memory address that the pointer is pointing to.
       In C++, you use the "*" operator to dereference a pointer.
    */

    return 0;
}
