#include <stdio.h>

int main() 
{
    int n=0,*p=&n;
    scanf("%d",&n);
    printf("var n value %d address is %x",n,&n);
    printf("\npointer p value is %d target adress is %d pointer adress is %x",*p,p,&p);
   return 0;
}