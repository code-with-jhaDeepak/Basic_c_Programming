/* 
Description:

Suppose, in a week let us assume first day is 'Sunday', then second day will be 'Monday' and so on. If first day is 'Monday' then the second day will be 'Tuesday' and so on.
Pr-requisites:-

Arithmetic operators
Switch Case
Objective: -

To understand the concept of Switch Case
Inputs: -
      Positive integer say 'N'. Where 1 <= 'N' <= 365.
      1 <= Starting day <= 7
      Option to set the first day.

Example :

       Where start_day = Wednesday
       Nth day = 5
       5th day of the year is Monday

Sample execution: -
Test Case 1:
user@emertxe] ./day_of_the_year
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
The day is Tuesday
Test Case 2:
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 3
The day is Wednesday
Test Case 3: 
Enter the value of 'n' : 9

Choose First Day :

1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 8
Error: Invalid input, first day should be > 0 and <= 7
Test Case 4:

Enter the value of 'n' : 0
Error: Invalid Input, n value should be > 0 and <= 365
Test Case 5:
Enter the value of 'n' : 366
Error: Invalid Input, n value should be > 0 and <= 365

*/
#include<stdio.h>
#include<conio.h>
int main()
{
     while(1){
        int number;
        int no_of_dayy;
        printf("Enter you day in year Hint:- 1<='N'<=365\n");
        scanf("%d",number);
        printf("Set week day\nChoose First Day : \n"

                    "1. Sunday\n"
                    "2. Monday\n"
                    "3. Tuesday\n"
                    "4. Wednesday\n"
                    "5. Thursday\n"
                    "6. Friday\n"
                    "7. Saturday\n");
        printf("Enter the option to set the first day:\n");
        scanf("%d",no_of_dayy);
        printf("start_day is: %d",no_of_dayy);
        if(number>0 && number<=365){
            
            switch (number)
            {
            case 1:
                printf("Sunday");
                break;
            
            case 2:
                printf("Monday");
                break;

            case 3:
                printf("Tuesday");
                break;

            case 4:
                printf("Wednesday");
                break;
            
            case 5:
                printf("Thursday");
                break;


            case 6:
                printf("Friday");
            

            case 7:
                printf("Saturday");
            


            default:
                printf("Not selected anything");
                break;
            }
        }
        else{
            printf("Incorrect Input");

        }
     }
}