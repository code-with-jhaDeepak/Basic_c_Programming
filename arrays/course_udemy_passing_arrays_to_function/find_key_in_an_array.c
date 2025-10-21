#include<stdio.h>
void key_check_function(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(key==arr[i])
        {
            printf("Key found");
            return;
        }
    }
    printf("Key not found in the array");
}
int main()
{
    int size;
    int key,result;
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
printf("Pass any number to check weather the key is present or not...\n");
scanf("%d",&key);
key_check_function(my_arr,size,key);
return 0;

}