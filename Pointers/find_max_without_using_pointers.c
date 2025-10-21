#include<stdio.h>
int findMax(int num1,int num2)
{
    if(num1>num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int main(){
    int a=5,b=7;
    int max;
    max=findMax(a,b);
    printf("Max in between %d and %d =%d\n",a,b,max);
}