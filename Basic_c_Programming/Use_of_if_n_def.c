#include<stdio.h>
#define PI 3.14159

#ifndef PI
#define PI 3.1415901
#endif
int main(){
    printf("PI: %f",PI);
    return 0;

}