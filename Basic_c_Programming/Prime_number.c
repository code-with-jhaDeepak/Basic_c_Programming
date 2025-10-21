#include<stdio.h>
#include<conio.h>
int main(){
    int number,i;
    int count=0;
    printf("Enter prime number:->\n");
    scanf("%d",&number);
     for(int i=2;i<number;i++)
     {
        if(number%i==0){
            count++;
        }
    }
    if (count>0)
    {
        printf("Number '%d ' is Prime.",number);
    }
    else{
        printf("Number '%d' is not Prime.",number);
    }
    printf("%d",count);
}