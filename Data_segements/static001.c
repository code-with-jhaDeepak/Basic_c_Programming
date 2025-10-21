#if 0
#include<stdio.h>
// static int count=0;
void counter(){
    static int count=0;
    count++;
    printf("Count =%d\n",count);
}
int main()
{
    counter();
    counter();
}
#endif
#if 1
#include<stdio.h>
void counter() {
    static int c;
    printf("%d ", ++c);
}

int main() {
    for (int i = 0; i < 4; i++)
        counter();
}

#endif