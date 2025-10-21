#include<stdio.h>
int find_Min_Max(int first_number,int second_number,int *min,int *max)
{

    if(first_number>second_number)
    {
        *min=second_number;
        *max=first_number;
    }
    else
    {
        *min=first_number;
        *max=second_number;
    }
    return *min,*max;
}
int main(){
    int first_number;
    int second_number;
    int min,max;
    printf("Enter First numbers:->");
    scanf("%d",&first_number);
    printf("Enter Second numbers:->");
    scanf("%d",&second_number);
    find_Min_Max(first_number,second_number,&min,&max);
    printf("Here minimum value is %d and max value is %d",min,max);
    
}