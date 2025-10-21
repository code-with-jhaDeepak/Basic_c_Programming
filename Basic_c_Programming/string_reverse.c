#if 0
#include<stdio.h>
#include<string.h>
int main(){
    char greet[20];
    strcpy(greet, "Hello");
    strrev(greet);
    printf("%s", greet);
}
    #endif
    #if 1
    #include<stdio.h>
    #include<string.h>
    int main(){
        char greet[20]="Hello World";
        // First count length of complete string 
        int i,j,k;
        for(i=0;greet[i]!='\0';i++);
        printf("Size of complete string is :%d\n", i);
        // Now calculate first string and second string length
        int firstStringLength = 0;
        int secondStringLength = 0;
        for(j=0;greet[j]!=' ';j++);
        for(k=j+1;greet[k]!='\0';k++);
        firstStringLength = j;
        secondStringLength = k;
        printf("Length of first string is :%d\n", firstStringLength);
        printf("Length of second string is :%d\n", secondStringLength);
    }
    #endif