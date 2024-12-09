//C Program to Generate Fibonacci Series of N Numbers
#include<stdio.h>
int main()
{
    long fib(int )
{
int n=0;
scanf("%d",&n);
printf("the fibunoci series of %d is %d ",n,fib(n));
}
long fib(int no)
{
    if(no<=0) return 0;
    if(no==1)return 1;
    return fib(no-2)+fib(no-1);
}
}