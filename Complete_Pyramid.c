/*
    *
   *** 
  *****
 *******
********* 
 *******
  *****
   ***
    * 
*/

#include<stdio.h>
int main(){
    int number;
    printf("Enter sequence:->\n");
    scanf("%d",&number);
    for(int i=0;i<=number;i++){
        for(int j=0;j<number-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=number-1;i>=1;i--){
        for(int j=0;j<number-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    

}