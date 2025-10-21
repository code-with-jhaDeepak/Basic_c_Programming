#if 0
#include<stdio.h>
void main()
{
    int *ptr;
    int grades[3]={80,90,100};
    printf("Grades start at: %p\n",grades);
    printf("Grades start at: %p\n",grades+1);
    printf("Grades start at: %p\n",*(grades+1));
    printf("grades:%d\n",*grades);
}
#endif
#if 0
#include<stdio.h>
int main()
{
    int num=30;
    int *p;
    printf("%d\n",num);//30
    p=&num;
    printf("%p\n",&num);//address of num
    printf("%p\n",p);//this prints the address stored in p (NOT the address of p itself!)
    *p=20;
    printf("%d\n",num);//20
}
#endif
#if 1
#include<stdio.h>
int main(){
    // int num;
    // printf("size of int=%d\n",sizeof(num));//4
    // double grade=99.8;
    // printf("Size of int=%d\n",sizeof(grade));//8
    printf("Size of double=%d\n",sizeof(double));//8
    printf("Size of char=%d\n",sizeof(char));//1
    printf("Size of int=%d\n",sizeof(int));//4
    printf("Size of float=%d\n",sizeof(float));//4
    printf("Sizeof character=%zu\n",sizeof('a'));//1
    printf("Size of string=%d\n",sizeof("a"));//2
}
#endif