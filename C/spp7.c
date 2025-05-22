//1,3,5,7,9,.......n(limit)
#include <stdio.h>
int main ()
{
    int limit,x;
    scanf("%d",&limit);
    for(x=1;x<=limit;x++)
    {
        printf("%d,",(x*2)-1);
    }
    return 0;
}