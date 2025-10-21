#include<stdio.h>
#include<math.h>
void main(){
    int r,temp,sum=0;
    int number;
    int i=0;
    scanf("%d",&number);
    temp=number;
    int reserve_number=number;
    while (temp!=0)
    {
        temp=temp/10;
        i++;
    }    
    while(number!=0){
        r=number%10;            
        sum=sum+pow(r,i);
        number=number/10;
    }
 if(reserve_number==sum){
    printf("%d Is ArmStrong number",sum);
 }
 else{
    printf("%d is not Armstrong number",sum);
 }
}