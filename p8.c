#include<stdio.h>
int main()
{
    int number,x=10;
    printf("enter the number:");
    scanf("%i",&number);
    do
    {
        printf("%d x %d=%d\n",number,x,number*x);
        x--;
    } while (x>=1);
    return 0;
}