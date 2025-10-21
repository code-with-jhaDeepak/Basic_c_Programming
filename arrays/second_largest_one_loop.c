#include<stdio.h>
#include<limits.h>
int main()
{
    // int array[]={-12,-16,-11,13,19,25,-27,29,-41,18,16};
    int array[]={-5,5,4,-4,3,1,2,1,8,7};
    int size_of_array=sizeof(array)/sizeof(array[0]);
    int max=INT_MIN;
    int s_max=INT_MIN;
    printf("Size of an array is %d\n",size_of_array);
    for(int i=0;i<size_of_array;i++)
    {
        if (max<array[i])
        {
            s_max=max;
            max=array[i];
        }
        else if(s_max<array[i] && array[i]!=max)// 5 4 3 2 1
        {
            s_max=array[i];
        }
    }
    printf("%d is Max and %d is second Max",max,s_max);

}