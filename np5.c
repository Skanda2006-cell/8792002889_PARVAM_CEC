#include<stdio.h>
int main()
{
	int n=0;
    scanf("%d",&n);
	for (int i = n; i >= 1; i--)
     {
        for (int j = n; j >= n - i + 1; j--) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
}