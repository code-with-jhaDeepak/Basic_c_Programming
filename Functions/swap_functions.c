#include<stdio.h>
int swap_func(int *first_number,int *second_number)
{
    int temp=0;
    temp=*first_number;
    *first_number=*second_number;
    *second_number=temp;
    return 0;
}
int main()
{
    int first_number=10;
    int second_number=20;
    printf("First_number: %d and Second_number:%d\n",first_number,second_number);
    swap_func(&first_number,&second_number);
    printf("First_number: %d and Second_number:%d\n",first_number,second_number);
    return 0;
}