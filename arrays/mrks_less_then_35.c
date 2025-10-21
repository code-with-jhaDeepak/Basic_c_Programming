
#if 0
#include<stdio.h>
int main(){
    int marks[10]={65,67,29,34,15,56,13,92,44,55};
    for(int i=0;i<10;i++)
    {
        if(marks[i]<35)
        {
            printf("Sudent of roll number :%d is having less then 35.\n",i);
        }
    }
}
#endif

#if 1
#include<stdio.h>
int main(){
    int product=1;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        product=product*arr[i];
    }
    printf("%d",product);
}
#endif