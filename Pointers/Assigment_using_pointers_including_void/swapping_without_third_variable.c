/*
Implement Swap without Temporary Variable (Addition-Subtraction Method):
Write another function named swapIntsNoThird1 that also swaps the values 
of two integers, but this time, don't use a temporary variable.
Instead, use addition and subtraction to swap the values.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swapIntsNoThird1(int *first_number,int *second_number)
{
    *first_number=*second_number+*first_number;
    *second_number=*first_number-*second_number;
    *first_number=*first_number-*second_number;
}
int main()
{
    int integer1=10,integer2=20;
    printf("Before swapping ");
    printf("First integer: %d , Second integer: %d\n",integer1,integer2);
    //caling of swapInts function
    swapIntsNoThird1(&integer1,&integer2);
    printf("After swapping ");
    printf("First integer: %d , Second integer: %d\n",integer1,integer2);
}