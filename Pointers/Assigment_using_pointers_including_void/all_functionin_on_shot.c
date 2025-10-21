#include <stdio.h>
#include <stdlib.h> // For malloc and free (used in genericSwap)
#include <string.h> // For memcpy (used in genericSwap)

// --- FUNCTION PROTOTYPES (Assume these are defined above main or in a header) ---
void swapInts(int *a, int *b);
void swapIntsNoThird1(int *a, int *b);
void swapIntsNoThird2(int *a, int *b);
void genericSwap(void *a, void *b, size_t size);

// --------------------------------------------------------------------------------
// NOTE: I am including the definitions here for a complete, runnable example.
// --------------------------------------------------------------------------------

// 1. Basic Swap (Uses a temporary variable)
void swapInts(int *first_number, int *second_number)
{
    int temp = *first_number;
    *first_number = *second_number;
    *second_number = temp;
}

// 2. Addition/Subtraction Swap (No temporary variable)
void swapIntsNoThird1(int *first_number, int *second_number)
{
    *first_number = *second_number + *first_number;
    *second_number = *first_number - *second_number;
    *first_number = *first_number - *second_number;
}

// 3. Multiplication/Division Swap (No temporary variable)
void swapIntsNoThird2(int *first_number, int *second_number)
{
    // WARNING: This method fails if either number is 0 or if A*B causes overflow.
    *first_number = (*second_number) * (*first_number);
    *second_number = (*first_number) / (*second_number);
    *first_number = (*first_number) / (*second_number);
}

// 4. Generic Swap (Uses dynamic memory)
void genericSwap(void *a, void *b, size_t size)
{
    void *tempmemory = malloc(size);
    if (tempmemory == NULL) return; // Error handling

    memcpy(tempmemory, a, size);
    memcpy(a, b, size);
    memcpy(b, tempmemory, size);
    
    free(tempmemory);
}

// --------------------------------------------------------------------------------

int main()
{
    // Common variables for testing the integer-specific functions
    int a, b;
    const int INITIAL_A = 10, INITIAL_B = 20;

    printf("--- Testing Swap with Temporary Variable (swapInts) ---\n");
    a = INITIAL_A;
    b = INITIAL_B;
    printf("Before swap: A = %d, B = %d\n", a, b);
    swapInts(&a, &b);
    printf("After swap:  A = %d, B = %d (Expected: 20, 10)\n\n", a, b);

    // --- Reset variables for the next test ---
    
    printf("--- Testing Swap with Add/Subtract (swapIntsNoThird1) ---\n");
    a = INITIAL_A;
    b = INITIAL_B;
    printf("Before swap: A = %d, B = %d\n", a, b);
    swapIntsNoThird1(&a, &b);
    printf("After swap:  A = %d, B = %d (Expected: 20, 10)\n\n", a, b);
    
    // --- Reset variables for the next test ---

    printf("--- Testing Swap with Multiply/Divide (swapIntsNoThird2) ---\n");
    a = INITIAL_A;
    b = INITIAL_B;
    printf("Before swap: A = %d, B = %d\n", a, b);
    swapIntsNoThird2(&a, &b);
    printf("After swap:  A = %d, B = %d (Expected: 20, 10)\n\n", a, b);

    // --- Testing the Generic Swap function with a different data type (double) ---

    double x = 3.14, y = 1.0;
    
    printf("--- Testing Generic Swap (genericSwap) with doubles ---\n");
    printf("Before swap: X = %.2f, Y = %.2f\n", x, y);
    genericSwap(&x, &y, sizeof(double));
    printf("After swap:  X = %.2f, Y = %.2f (Expected: 1.00, 3.14)\n\n", x, y);

    return 0;
}