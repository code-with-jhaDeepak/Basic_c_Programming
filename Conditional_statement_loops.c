#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int iter =0;
    while(iter++<5)
        printf("Looped %d TIMES\n",iter);
    printf("looped outside %d times",iter);
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int iter=0;
    while (++iter<5)
        printf("Looped %d times\n",iter);
    printf("Looped outside %d times\n",iter);
        /* code */
    
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int iter=0;
    while (iter<5)
    {
        /* code */
        printf("Lopped %d times\n",iter++);
    }
    printf("Iteration outside : Looped %d times\n",iter);
    
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int iter=0;
    while (iter<5)
    {
        /* code */
        printf("Lopped %d times\n",++iter);
    }
    printf("Iteration outside : Looped %d times\n",iter);
    
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int m1ain(){
    for (int iter = 0; iter < 10; ++iter)
    {
        /* code */
        printf("Looped %d times \n",iter);
    }
    
    
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int iter=0;
    while(iter<5){
        printf("Looped %d times\n",iter);
        iter++;
    }
    
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int iter=0;
    while(iter<5)
        printf("Looped %d times\n",iter);
        iter++;
    
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int iter=0;
    while(iter<5)
        printf("Looped %d times\n",iter);
        iter++;
    
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int iter=0;
    while(iter<5)
    {
         ;
    }
    {
        printf("Looped %d times\n",iter);
        iter++;
    }
        
    
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int iter=0;
    while(iter++<5);
    {
        printf("Looped %d times\n",++iter);
    }
    return 0;
        
    
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int iter=0;
    while(iter++<5);
    {
        printf("Looped %d times\n",++iter);
    }
    return 0;
        
    
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int iter=0;
    while (iter<5)
    {
        /* code */
        printf("Looped %d times\n",iter);
        iter++;
    }
    printf("Looped outside %d times\n",iter);
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int iter=0;
    while (iter<5)
        printf("Looped %d times\n",iter);
        iter++;

    return 0;
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int iter=0;
    while (iter++<5)
        printf("Looped %d times\n",iter);
    return 0;
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int iter=0;
    while (++iter<5)
        printf("Looped %d times\n",iter);
    return 0;
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int iter;
    for(iter=0;iter<10;++iter){
        printf("Looped %d times\n",iter);
    }
    return 0;
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            printf("* ",i);  
        }
        printf("\n");
    }
    return 0;
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("* ",i);  
        }
        printf("\n");
    }
    return 0;
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("* ");  
        }
        printf("\n");
    }
    return 0;
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        for(k=5;k-i>0;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");  
        }
        printf("\n");
    }
    return 0;
}
#endif
#if 0
#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        for(k=1;k<=5-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");  
        }
        printf("\n");
    }
    return 0;
}
#endif
#if 1
#include<stdio.h>
/*:-> For compound interest, we need one formula to calculate it, which is like below
SI = (P * R * T) / 100
SI: is the simple interest
P is the principal amount
R: is the rate of interest per year (in percentage)
T is the period in years.*/
int main()
{
    float SI,P,R,T;
    
}