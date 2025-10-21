#include<stdio.h>
int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int target=12;
    int count=0;
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(array[i]+array[j]==target && array[i]!=array[j])
            {
                count++;
                printf("(%d,%d)\n",array[i],array[j]);
            }
        }
    }
    printf("%d is number of pairs hitting targets\n",count);
}