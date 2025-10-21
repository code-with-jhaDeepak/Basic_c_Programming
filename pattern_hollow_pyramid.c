#include <stdio.h>

int main()
{
    int number,row,column,k;
    printf("Enter the number\n");
    scanf("%d",&number);
    
    column=number;
    row=(number/2)+1;
    for(int i=1;i<=row;i++)
    {
        for (int j = 1; j <= row - i; j++) 
        {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            // if (i == 1 || i == row || k == 1 || k == (2 * i - 1)) 
            if (i == 1 || i == row || k == 1 || k == (2 * i - 1)) 
            {
                printf("*");
            } 
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}