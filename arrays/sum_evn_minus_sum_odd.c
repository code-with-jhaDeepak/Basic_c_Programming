#include<stdio.h>
int main()
{
    int sum_of_even=0;
    int sum_of_odd=0;
    int array[6]={1,3,5,7,9,11};
    for(int i=0;i<6;i++)
    {
        if(i%2==0)
        {
            sum_of_even+=array[i];
        }
        else
        {
            sum_of_odd+=array[i];
        }
    }
    printf("%d\n",sum_of_even);
    printf("%d\n",sum_of_odd);
    int difference=sum_of_even-sum_of_odd;
    printf("%d",difference);
}