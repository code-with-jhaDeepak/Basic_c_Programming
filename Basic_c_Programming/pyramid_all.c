#include <stdio.h>

int main()
{
    int number=5;
    for(int i=1;i<=number;i++)
    {
        for(int k=1;k<=number-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}