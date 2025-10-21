#if 0
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("Size of array is:");
    scanf("%d",&n);
    printf("%d will be size of array\n",n);
    int * ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not available\n");
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter an integer for array[%d]:\n",i);
        scanf("%d",&ptr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Value of array[%d] is: %d\n", i, ptr[i]);
    }
    
    

}
#endif
#if 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    printf("Size of array is: ");
    scanf("%d", &n);
    printf("%d will be size of array\n", n);
    
}
#endif