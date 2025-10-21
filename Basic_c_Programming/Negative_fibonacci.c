/* 0 1 -1 2 -3 5 -8 */ 
#include<conio.h>
#include<stdio.h>

int main(){
    int first_number=0;
    int second_number=1;
    int next_number=first_number-second_number;
    int input;
    printf("Enter number:->");
    scanf("%d",&input);
    if(input<second_number||first_number){
        printf("%d%d",first_number,second_number);
    }
    else if ( input>second_number)
    {
        /* 0, 1, 1, 2, 3, 5, 8 */
        printf("%d %d",first_number,second_number);
        while(next_number<input){
            next_number=first_number-second_number;
            first_number=second_number;
            second_number=next_number;
            printf(" %d",next_number);
        }
        
    }
    else{
        printf("Invalid Input");
    }
    

}
