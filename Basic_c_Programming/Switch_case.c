#include<stdio.h>
void main(){
    int option;
    scanf("%d",&option);
    switch (option)
    {
        case 1:
        {
            int first_case=1;
            if(option==first_case){
                printf("You have went for %d",first_case);
            }
            break;
        }
            /* code */
            
        
        case 2:
        {
            /* code */
            int second_case=2;
            if(option==second_case){
                printf("You have went for %d",second_case);
            }
            break;
        }

        case 3:
            {
                /* code */
            int third_case=3;
            if(option==third_case){
            printf("You have went for %d",third_case);
            }
            break;
            }
        default:
            break;
    }
}
