#include<stdio.h>
int main()
{
    int array[8]={10,12,14,16,18,20,21,22};
    int new_array[8]={};
    for(int i=0;i<=7;i++)
    {
        if(i%2==0)
        {
            new_array[i]=array[i]+10;
        }
        else
        {
            new_array[i]=array[i]*2;
        }
    }
    for(int i=0;i<=7;i++)
    {
        printf("%d ",new_array[i]);
    }
    return 0;
}