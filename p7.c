#include<stdio.h>
int main()
{
    int number,x=10;
    printf("enter the number:");
    scanf("%i",&number);
    while(x>=1)
    {
        printf("%d x %d=%d\n",number,x,number*x);
        x--;
    }
    return 0;
}