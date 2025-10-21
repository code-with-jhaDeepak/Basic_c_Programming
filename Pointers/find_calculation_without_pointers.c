#include<stdio.h>
int sum(int first_number,int second_number)
{
    int add=first_number+second_number;
    return add;
}
int substraction(int first_number,int second_number)
{
    int minus=first_number-second_number;
    return minus;
}
int multiplication(int first_number,int second_number)
{
    int multiply=first_number*second_number;
    return multiply;
}
int division(int first_number,int second_number)
{
    int divide=first_number/second_number;
    return divide;
}
int main()
{
    int first_number,second_number;
    printf("Enter First Number:");
    scanf("%d",&first_number);
    printf("Enter second number:");
    scanf("%d",&second_number);

    printf("Without using pointers just basic calculations in the below\n");
    printf("Sum function call:->\n");

    int addition=sum(first_number,second_number);
    printf("%d\n",addition);

    int minus=substraction(first_number,second_number);
    printf("%d\n",minus);

    int multiply=multiplication(first_number,second_number);
    printf("%d\n",multiply);
    int divide=division(first_number,second_number);
    printf("%d\n",divide);
}