/*
Name:Deepak Kumar
Date:16/12/2024
Description:Read a number from user. Let's say if number is 5, you need to print numbers in X pattern as shown below:

			If n = 5, then,
			1___5
			_2_4_
			__3__
			_2_4_
			1___5
			Note:- Please consider '_' as space. 
Sample i/p:Enter the number: 4
 sample o/p:
            1  4
             23
             23
            1  4
*/
#include<stdio.h>
int main(){
    int number,i,j;
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        for(j=1;j<=number;j++){
            if(i==j){
                printf("%d",i);
            }
            else if(j+i==number+1){
                printf("%d",j);
            }
            else{
                printf("_");
            }
        }
        printf("\n");
    }
}