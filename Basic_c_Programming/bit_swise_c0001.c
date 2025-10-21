#if 0
#include<stdio.h>
int main()
{
    int count=0;
    unsigned char iter=0xFF;
    for(;i
    ter!=0;iter>>1)
    {
        if(iter & 01)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
#endif
#if 0
#include<stdio.h>
int main()
{
    printf("%x\n",0x0A || 0x05);
    // printf("%x\n",0x0A || 0x06);
    // printf("%x\n",0x0A ^ 0x06);
    // printf("%x",0x0A && 0x06);
}
#endif
#if 1
#include<stdio.h>
int main()
{
    // int num=0x6A;
    // int mask=0x20;
    // printf("%x",num|mask);
    // int num1=80;
    // int num2=65;
    // printf("%d",num1 & num2);
    printf("%d\n",-95>>2);
    printf("%x\n",-95>>2);
}
#endif