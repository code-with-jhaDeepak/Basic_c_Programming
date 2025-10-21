/*
Implement Basic Swap: Write a function named swapInts that swaps the 
values of two integers. This function should take the addresses 
of two integers as arguments (use pointers),
and it should not return anything. Implement this function 
in such a way that a third temporary variable is used for swapping.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swapInts(int *first_number,int *second_number)
{
    int temp=*first_number;
    *first_number=*second_number;
    *second_number=temp;
}
int main()
{
    int integer1=10,integer2=20;
    printf("Before swapping ");
    printf("First integer: %d , Second integer: %d\n",integer1,integer2);
    //caling of swapInts function
    swapInts(&integer1,&integer2);
    printf("After swapping ");
    printf("First integer: %d , Second integer: %d\n",integer1,integer2);
}