#include<stdio.h>
int main()
{
    int number=100;
    int *ptr=&number;
    printf("%d\n",*ptr);
    *ptr=15;
    printf("%d\n",number);
    printf("%p",*ptr);
    
}