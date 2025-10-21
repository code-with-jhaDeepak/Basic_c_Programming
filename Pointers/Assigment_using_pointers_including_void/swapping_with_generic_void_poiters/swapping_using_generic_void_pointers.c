/*
Implement Generic Swap Function: Finally, write a function named genericSwap that can swap two variables of any data type.
This function should take three arguments: the addresses of two variables to be swapped and the size of the data type.
This function should use dynamic memory allocation (malloc) to allocate temporary storage for the swap, and the memcpy function to perform the actual data swapping.
*/
#include <stdio.h>
#include <stdlib.h> // For malloc and free
#include <string.h> // For memcpy
void genericSwap(void *a, void *b, size_t size)
{

    // 1. Allocate temporary memory block using malloc
    void *tempmemory = malloc(size);
    // Safety check: always ensure memory was allocated successfully
    if (tempmemory == NULL) {
        // Handle error: could print an error message or exit
        return; 
    }
    // 2. Copy data from 'a' to temporary memory
    memcpy(tempmemory, a, size);
    // 3. Copy data from 'b' to 'a'
    memcpy(a, b, size);
    // 4. Copy data from temporary memory to 'b'
    memcpy(b, tempmemory, size);
    // 5. Free the dynamically allocated memory
    free(tempmemory);
}

int main()
{
    // Example 1: Swapping Integers (4 bytes)
    int first_num = 10, second_num = 20;
    printf("Integers Before: A=%d, B=%d\n", first_num, second_num);
    genericSwap(&first_num, &second_num, sizeof(int));
    printf("Integers After: A=%d, B=%d\n", first_num, second_num);
    // Example 2: Swapping Doubles (8 bytes)
    double pi = 3.14159, e = 2.71828;
    printf("Doubles Before: PI=%.5f, E=%.5f\n", pi, e);
    genericSwap(&pi, &e, sizeof(double));
    printf("Doubles After: PI=%.5f, E=%.5f\n", pi, e);
    return 0;

}