#include <stdio.h>
int main() 
{
    int m,n;
    printf("before swap m=%d n=%d",m,n);
    m=m+n;
    n=m-n;
    m=m-n;
    printf("after swap m=%d n=%d",m,n);
    return 0;
}