#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Input numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
