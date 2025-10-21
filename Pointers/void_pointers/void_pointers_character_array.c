#if 0
#include<stdio.h>
int main()
{
    char carray[4]={'A','N','I','L'};
    void* vp=carray;
    //Code for printing first character in th chracter array
    printf("%c\n",*((char*)vp));
    // Line of code moving two position in the above array
    vp=(void*)((char*)vp+2);
    printf("%c",*((char*)vp));
}
#endif
#if 1
#include<stdio.h>
int main()
{
    char carray[4]={'A','N','I','L'};
    void* vp=carray;
    for(int i=0;i<4;i++)
    {
        printf("%c\n",*((char*)vp));
        vp=(void*)((char*)vp+1);
    }
    return 0;
}
#endif