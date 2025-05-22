#include <stdio.h>

int main() {
    int m=10,n=20,t;
    t= m;
    m = n;
    n = t;
    printf("After swapping: m = %d, n= %d\n", m,n);

    return 0;
}