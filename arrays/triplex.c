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
            for(int k=j+1;k<10;k++)
            {
                if(array[i]+array[j]+array[k]==target)
                {
                    count++;
                    printf("(%d,%d,%d)\n",array[i],array[j],array[k]);
                }
            }
        }
    }
    printf("%d is number of pairs hitting targets\n",count);
}