#if 0
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    void* ptr_arr=&arr;
    //It should print an array
    
    // performing some arithmatic operations throgh void poinetrs
    ptr_arr=(ptr_arr)+1;
    printf("%d\n",*(int*)ptr_arr);
}
#endif
#if 0
// C program to demonstrate the usage
// of a void pointer to perform pointer
// arithmetic and access a specific memory location

#include <stdio.h>

int main()
{
    // Declare and initialize an integer array 'a' with two
    // elements
    int a[2] = { 1, 2 };
    // Declare a void pointer and assign the address of
    // array 'a' to it
    void* ptr = &a;

    // Increment the pointer by the size of an integer
    ptr = ptr + sizeof(int);

    // The void pointer 'ptr' is cast to an integer
    // pointer using '(int*)ptr' Then, the value is
    // dereferenced with `*(int*)ptr` to get the value at
    // that memory location
    printf("%d", *(int*)ptr);

    return 0;
}
#endif
#if 0
// C program to demonstrate the usage
// of a void pointer to perform pointer
// arithmetic and access a specific memory location

#include <stdio.h>

int main()
{
    // Declare and initialize an integer array 'a' with two
    // elements
    int a[2] = { 1, 2 };
    // Declare a void pointer and assign the address of
    // array 'a' to it
    void* ptr = a;
    printf("%d",*((int*)ptr));
    ptr=(void*)((int*)ptr+1);
    printf("%d",ptr);

    return 0;
}
#endif
#if 1
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    void *ptr=a;
    for(int i=0;i<5;i++)
    {
        printf("%d",*((int *)ptr));
        ptr=(void *)((int *)ptr+1);
        printf("\n");
    }
    printf("\n");
    return 0;
}
#endif