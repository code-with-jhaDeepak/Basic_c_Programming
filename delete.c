// #include<stdio.h>
// #include<math.h>
// void main(){
//     int var=141;
//     int sum,temp=0;
//     while(var>0){
//         var=var%10;
//         sum=sum*10+var;
//         var=var/10;
//         printf("%d",sum);
//     }

// }
#include<stdio.h>
#include<math.h>
void main(){
    int r,temp,sum=0;
    int number;
    int i=1;
    scanf("%d",&number);
    temp=number;
    // scanf("%d",&number);
    while(number>0){
        r=number%10;
        if(number/10==0){
            i++;
        }

        sum=sum+pow(r,i);
        number=number/10;
    }
    printf("%d\n",i);
//  if(temp==sum){
//     printf("%d Is ArmStrong number",sum);
//  }
//  else{
//     printf("%d is not Armstrong number",sum);
//  }
}