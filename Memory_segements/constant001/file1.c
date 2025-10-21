// file1.c
#include <stdio.h>
const int x = 4; // External linkage in C
const int y = 15;

void print_x() {
    printf("x = %d\n", x);
}
