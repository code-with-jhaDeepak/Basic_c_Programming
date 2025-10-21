// file2.c
#include <stdio.h>
extern const int x; // Declaration (external linkage)
extern const int y;

int main() {
    printf("x = %d\n", x); // Accesses x defined in file1.c
    printf("y = %d\n", y); // Accesses y defined in file1.c
    printf("Sum will be =%d",x+y);
    return 0;
}
