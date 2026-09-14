#include <stdio.h>
int main() {
    int firstNumber, secondNumber, sum;

    printf("Enter two numbers :");
    scanf("%d %d", &firstNumber, &secondNumber);

    sum = firstNumber + secondNumber;

    printf("Sum = %d\n", sum);
    return 0;
}