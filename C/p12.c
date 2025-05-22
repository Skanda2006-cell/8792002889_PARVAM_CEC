#include <stdio.h>
int main ()
{
    int ll,ul,x=ll;
    scanf("%d %i",&ll,&ul);
while (x<=ul)
{
    if(x%2==0)
    printf("%d\n",x);
    x++;
}
return 0;
}