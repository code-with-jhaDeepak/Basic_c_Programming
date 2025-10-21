#include<stdio.h>
#include<math.h>
int main(){
    int number=16345;
    int temp=0;
    temp=number;
    int i;
    // int cal=1+pow(number,power);
    while (temp!=0)
    {
        temp=temp/10;
        ++i;

    }
    printf("%d",i);
}