#include<stdio.h>
int main(){
    int first_number;
    int common_difference;
    int last_number;
    int temp=0,i=0,next_number;
    printf("Enter First number:- ");
    scanf("%d",&first_number);
    temp=first_number;
    printf("Enter Common difference:- ");
    scanf("%d",&common_difference);
    printf("Enter last number:- ");
    scanf("%d",&last_number);
    printf("A.P series :");
    printf("%d ",first_number);
    while(first_number<last_number){
        next_number=first_number+common_difference;
        printf("%d ",next_number);
        first_number=next_number;
        next_number=first_number+common_difference;
    }
    printf("\nG.P series: ");
    printf("%d ",temp);
    while (temp<last_number)
    {
        temp=temp*common_difference;
        printf(" %d ",temp);
    }
    
}