#include<stdio.h>
int main()
{
    int pattern;
    printf("Enter number\n");
    scanf("%d",pattern);
    for(int i=0;i<pattern;i++)
    {
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    
}