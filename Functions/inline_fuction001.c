#include <stdio.h>

inline int foo() {
    return 2;
}

int main() {
    int res;
    res = foo();
    printf("%d", res);
    return 0;
}