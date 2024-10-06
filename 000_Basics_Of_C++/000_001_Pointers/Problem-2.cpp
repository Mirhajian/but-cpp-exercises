#include <iostream>

int main() {
    // WHAT IS "nullptr"?
    int* p = nullptr;  // p doesn't point to any valid memory location
    /* In simple terms, nullptr is a special keyword in C++
       that represents a null pointer.
       It means "no valid memory address" or "nothing."
       You use nullptr to indicate that a pointer doesn't point to any valid memory location yet.
    */ 

    // DEREFERENCING A NULL POINTER:
    std::cout << *p << std::endl;  // Error! Dereferencing a null pointer
    /* Result: [1] 94767 segmentation fault (This is a runtime error)
     
       Reason: If a pointer is set to nullptr, it means it doesn't point to any valid memory.
       Dereferencing a nullptr leads to a runtime error
       (often called a "segmentation fault" or "null pointer exception").
       A shout-out to the famous meme: youtube.com/watch?v=bLHL75H_VEM
    */
    
    /* Why use nullptr:
        1. It's safer than using a garbage value or NULL (an older C way of representing a null pointer).

        2. It’s specifically designed for pointers in C++,
            while NULL was a general integer constant that could lead to confusion.
    */

    return 0;
}
