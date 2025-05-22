//1,2,3,4,5,6,7.......n(limit)
#include <stdio.h>
int main ()
{
    int limit,x;
    scanf("%d",&limit);
    for(x=1;x<=limit;x++)
    {
        printf("%d,",x);
    }
    return 0;
}