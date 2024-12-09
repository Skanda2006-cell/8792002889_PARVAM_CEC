#include <stdio.h>
int main ()
{
    int lim,result=2,counter=1;
    scanf("%d",&lim);
    do
    {
        printf("\n%d\n",result);
        result*=2;
        counter++;
    } while (counter<=lim);
    return 0;
}
