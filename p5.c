#include <stdio.h>

int main() {
    int m, n, t;
    printf("Enter the first number: ");
    scanf("%d", &m);
    printf("Enter the second number: ");
    scanf("%d", &n);
    printf("\nBefore swapping: m = %d, n = %d\n", m, n);
    t = m;
    m = n;
    n = t;
    printf("After swapping: m = %d, n = %d\n", m, n);

    return 0;
}
