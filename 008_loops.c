/*

If n = 5, then,
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5

*/
#include<stdio.h>
int main()
{
    int number =5;
    for(int i=number;i!=0;i--)
    {
        for(int j=i;j<=number;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(int k=2;k<=(number);k++)
    {
        for(int l=k;l<=number;l++)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
}