#include<stdio.h>
int main()
{
    int array[]={-5,5,4,-4,3,1,2,1,8,7};
    int size_of_array=sizeof(array)/sizeof(array[0]);
    printf("Length of the array is: %d\n",size_of_array);
    printf("The given array is : ");
    for(int i=0;i<size_of_array;i++)
    {
        printf(" array[%d]:%d ",i,array[i]);
    }
    printf("\nNew array is :\n");
    int new_array[size_of_array];
    for(int i=size_of_array;i>=0;i--)
    {
        new_array[i]=array[size_of_array-1-i];
    }
    for(int i=0;i<size_of_array;i++)
    {
        printf(" New array[%d]:%d ",i,new_array[i]);
    }
}