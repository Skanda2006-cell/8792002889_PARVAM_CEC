//4,16,36,64,........n(limit)
#include <stdio.h>
int main ()
{
    int limit,x;
    scanf("%d",&limit);
    for(x=1;x<=limit;x++)
    {
        printf("%d,",4*x*x);
    }
    return 0;
}