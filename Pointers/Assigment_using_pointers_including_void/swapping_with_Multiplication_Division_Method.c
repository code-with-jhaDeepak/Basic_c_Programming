/*
Implement Swap without Temporary Variable (Multiplication-Division Method): 
Write a third function named swapIntsNoThird2 that swaps the values of two integers without a temporary variable.
This time, use multiplication and division to swap the values.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swapIntsNoThird2(int *first_number,int *second_number)
{
    *first_number=((*second_number)*(*first_number));
    *second_number=((*first_number)/(*second_number));
    *first_number=((*first_number)/(*second_number));
}
int main()
{
    int integer1=10,integer2=20;
    printf("Before swapping ");
    printf("First integer: %d , Second integer: %d\n",integer1,integer2);
    //caling of swapInts function
    swapIntsNoThird2(&integer1,&integer2);
    printf("After swapping ");
    printf("First integer: %d , Second integer: %d\n",integer1,integer2);
}