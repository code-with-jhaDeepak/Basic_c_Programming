#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    // scanf("%d",&number);
    int temp=number;
    int rev=0,sum=0;
    while (number>0)
    {
         rev=number%10;
         sum=sum*10+rev;
         number=number/10;
    }
    if(temp==sum){
        printf("%d is a palindrome number",sum);
    }
    else{
        printf("%d is not a palindrome number",sum);
    }
    
}