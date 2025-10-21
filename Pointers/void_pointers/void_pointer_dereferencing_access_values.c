#include<stdio.h>
int main()
{
    int a=10;
    int b=40;
    int c=50;
    int d=60;
    float num=60.0000;
    // char string[]="Anil Jha";
    void *ptr_a=&a;
    void *ptr_b=&b;
    void *ptr_c=&c;
    void *ptr_d=&d;
    void *ptr_num=&num;
    printf("%lf\n",*(float*)ptr_num);
    printf("%d\n",*(int*)ptr_a);
    printf("%d\n",*(int*)ptr_b);
    printf("%d\n",*(int*)ptr_c);
    printf("%d\n",*(int*)ptr_d);

}