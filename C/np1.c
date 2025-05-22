#include<stdio.h>
int main()
{
    int n=0,x=5;
    scanf("%d",&n);
    for ( int i = 0; i < n; i++)
    {
        for (int j = 5; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}