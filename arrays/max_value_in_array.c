#if 0
/*Code for max value in an array*/
#include<stdio.h>
int main()
{
    int array[]={-12,-16,-11,13,19,25,-27,29,-41,18,16};
    int size_of_array=sizeof(array)/sizeof(array[0]);
    printf("Size of array is :%d\n",size_of_array);
    int temp=array[0];
    for(int i=1;i<size_of_array;i++)
    {
            if(temp<array[i])
            {
                temp=array[i];
            }
            
    }
    printf("Highest value among given %d elements is %d",size_of_array,temp);
}
#endif
#if 1
/*Code for second max value in an array*/
#include<stdio.h>
int main()
{
    int first_max,second_max;
    int array[]={-12,-16,-11,13,19,25,-27,29,-41,18,16};
    int size_of_array=sizeof(array)/sizeof(array[0]);
    printf("Size of array is :%d\n",size_of_array);
    first_max=array[0];
    for(int i=1;i<size_of_array;i++)
    {
            if(first_max<array[i])
            {
                first_max=array[i];
            }
            
    }
    printf("Highest value among given %d elements is %d\n",size_of_array,first_max);
    second_max=array[0];
    for(int i=1;i<size_of_array;i++)
    {
            if(array[i]!=first_max && second_max<array[i])
            {
                second_max=array[i];
            }
    }
    printf("Second highest value among given %d elements is %d",size_of_array,second_max);
}
#endif