#include<stdio.h>
int main()
{
    long long myLongHistory=900;
    char size=sizeof(myLongHistory);

    printf("Size of char data type=%d\n",sizeof(char));
    printf("size of short data type =%d\n",sizeof(short));
    printf("size of int data type =%d\n",sizeof(int));
    printf("size of long data type =%d\n",sizeof(long));
    printf("size of long long data type =%d\n",sizeof(myLongHistory));

}