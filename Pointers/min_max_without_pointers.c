#include<stdio.h>
int find_Max(int first_number,int second_number)
{
    int max;
    if(first_number>second_number)
    {
        max=first_number;
    }
    else
    {
        max=second_number;
    }
    return max;
}
int find_Min(int first_number,int second_number)
{
    int min;
    if(first_number>second_number)
    {
        min=second_number;
    }
    else
    {
        min=first_number;
    }
    return min;
}
int main()
{
    int first_number;
    int second_number;
    printf("Enter First numbers:->");
    scanf("%d",&first_number);
    printf("Enter Second numbers:->");
    scanf("%d",&second_number);
    int max_val=find_Max(first_number,second_number);
    printf("Max value among %d and %d is %d\n",first_number,second_number,max_val);
    int min_val=find_Min(first_number,second_number);
    printf("Min value among %d and %d is %d\n",first_number,second_number,min_val);
}