#if 0
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void generic_swap_function(void *a,void *b,int size)
{
    void *tempmemory=malloc(size);
    memcpy(tempmemory,a,size);
    memcpy(a,b,size);
    memcpy(b,tempmemory,size);
    free(tempmemory);

}
int main()
{
    int first_num=10,second_num=20;
    float average_number1=92.5,average_number2=95.4;
    printf("Before calling function value of First_num=%d and Second_num=%d\n",first_num,second_num);
    generic_swap_function(&first_num,&second_num,sizeof(int));
    printf("After calling function value of First_num=%d and Second_num=%d\n",first_num,second_num);
    printf("Before calling function value of First_num=%d and Second_num=%d\n",first_num,second_num);
    generic_swap_function(&average_number1,&average_number2,sizeof(float));
    printf("After calling function value of Average Number1=%lf and Average_number2=%lf\n",average_number1,average_number2);



}
#endif


#if 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swapInts(void *a,void *b,int size)
{
    void *tempmemory=malloc(size);
    memcpy(tempmemory,a,size);
    memcpy(a,b,size);
    memcpy(b,tempmemory,size);
    free(tempmemory);

}
int main()
{
    int first_num=10,second_num=20;
    printf("Before calling function value of First_num=%d and Second_num=%d\n",first_num,second_num);
    swapInts(&first_num,&second_num,sizeof(int));
    printf("After calling function value of First_num=%d and Second_num=%d\n",first_num,second_num);
}
#endif