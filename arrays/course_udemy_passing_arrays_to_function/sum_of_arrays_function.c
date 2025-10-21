#include<stdio.h>
void calling_sum_function(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum is :-%d\n",sum);
}
int main()
{
    int size;
    printf("Enter size of arays: ");
    scanf("%d",&size);
    int my_arr[size];
    printf("Enter elements of the array:\n");
    for(int i=0;i<size;i++)
    {
        printf("Elements of array are arr[%d]: ",i);
        scanf("%d",&my_arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        printf("Array elemets with index[%d] is :-> %d\n",i,my_arr[i]);
    }
    //pssing array to the function
    calling_sum_function(my_arr,size);

}