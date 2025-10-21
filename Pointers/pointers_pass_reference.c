// Online C compiler to run C program online
#include <stdio.h>
int swap(int *first_number,int *second_number)
{
    int temp=*first_number;
    *first_number=*second_number;
    *second_number=temp;
    return *first_number,*second_number;
}
int main() {
    int first_number=10;
    int second_number=20;
    printf("Before Swap funcion\n");
    printf("First number is %d \nsecond number is %d\n",first_number,second_number);
    swap(&first_number,&second_number);
    printf("After swap function\n");
    printf("First number is %d \nsecond number is %d",first_number,second_number);
    return 0;
}