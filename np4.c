#include <stdio.h>

int main()
 {
    int n;
    scanf("%d", &n);


    for (int i = 2; i <= n; i++)
     {
        for (int j = 1; j <= i; j++)
         {
            printf("%d", j);
        }
        printf("\n");
    }
    for (int i = n; i >= 1; i--)
     {
        for (int j = n; j >= n - i + 1; j--) 
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}