#include<stdio.h>
#define NEW_LINE '\n'
int main(){
    printf("Current file is :%s",__FILE__);
    printf("%c",NEW_LINE);
    printf("Current time is :%s",__TIME__);
    printf("%c",NEW_LINE);
    printf("Current Date is :%s",__DATE__);
    printf("%c",NEW_LINE);
    printf("Crrent Line no':%d",__LINE__);
    printf("%c",NEW_LINE);
    return 0;
}