// ============================================================================
// Personal C++ Study Notes & Reference Sheet
// Target: Standard C++ syntax, Memory Management, Pointers, and Structs
// Note: Read-only reference file.
// Created: September 2026 (Vietnam)
// ============================================================================

#include <iostream> // Header for Standard Input/Output operations
#include <string>   // Header for std::string operations

// Function using Pass-by-Value (Parameter is a local copy, original value remains unchanged)
void name_variable(int parameter) {
    std::cout << "hello" << '\n';
    parameter -= 10; 
    std::cout << parameter << '\n';
}

// Struct definition: Used to group related variables under a single custom type
struct Print {
    std::string nof1; // Member 1
    std::string nof2; // Member 2
    std::string nof3; // Member 3
}; // Note: Must end with a semicolon

// Function receiving a pointer to a Struct (Pass-by-Pointer)
void Tester(const Print* p) {
    std::cout << p->nof1 << '\n'; // Access member via arrow operator (->)
}

int main() {
    // ------------------------------------------------------------------------
    // 1. Primitive Data Types
    // ------------------------------------------------------------------------
    int a = 100;                 // Integer type
    double b = 20.5;             // Double-precision floating-point type
    char c = 'A';                // Character type
    bool trues = true;           // Boolean type (true/false)
    std::string text = "hello";  // String type

    // ------------------------------------------------------------------------
    // 2. Console Output (std::cout) & Newline Performance
    // ------------------------------------------------------------------------
    std::cout << "Hello, world" << '\n';      // '\n': Newline only (Faster, does not flush buffer)
    std::cout << "Hello, world" << std::endl; // std::endl: Newline + Flushes the stream buffer (Slower)
    std::cout << "Hello, world";              // No newline, keeps cursor on the same line
    std::cout << "\nHello, world\n";          // Leading and trailing newline

    // ------------------------------------------------------------------------
    // 3. Console Input (std::cin)
    // ------------------------------------------------------------------------
    int your_variable = 0; // Always initialize variables before reading input
    std::cout << "Enter a number: ";
    std::cin >> your_variable; // Reads typed input from keyboard into variable

    // ------------------------------------------------------------------------
    // 4. Function Calls
    // ------------------------------------------------------------------------
    name_variable(a); // Pass 'a' by value

    // ------------------------------------------------------------------------
    // 5. Arrays (Contiguous Memory Allocation)
    // ------------------------------------------------------------------------
    int array[5] = {10, 20, 30, 40, 50}; // Fixed-size array (Indices range from 0 to 4)
    int arrays[5] = {0};                 // Initializes all 5 elements to 0

    // ------------------------------------------------------------------------
    // 6. Pointers & Memory Management
    // ------------------------------------------------------------------------
    // '&' = Address-of operator (Gets memory address of a variable)
    // '*' = Dereference operator (Accesses or modifies value at memory address)
    
    int* pointer = &a; // Stores the memory address of variable 'a'
    std::cout << "Memory Address: " << pointer << '\n';
    std::cout << "Real Value: " << *pointer << '\n';

    *pointer += 30; // Modifies the original variable 'a' via pointer
    std::cout << "After Modification: " << *pointer << '\n';

    // Dynamic Memory Allocation (Heap Memory)
    int* kptr = new int(52); // Allocates memory for an int on the Heap and sets value to 52
    std::cout << "Heap Value: " << *kptr << '\n';
    
    delete kptr;     // Frees allocated heap memory to prevent memory leaks
    kptr = nullptr;  // Resets pointer to null to avoid dangling/ghost pointers

    // ------------------------------------------------------------------------
    // 7. Struct Usage & Struct Pointers
    // ------------------------------------------------------------------------
    Print p1 = {"Hello", "Hi", "Yo"}; // Member-wise initialization
    std::cout << p1.nof1 << '\n';
    std::cout << p1.nof2 << '\n';
    std::cout << p1.nof3 << '\n';

    Print* sptr = &p1; // Pointer pointing to struct 'p1'
    sptr->nof1 = "Hello Pointer"; // Modifies struct member using '->' operator
    std::cout << p1.nof1 << '\n';

    Tester(&p1); // Passes address of 'p1' to function

    return 0;
}