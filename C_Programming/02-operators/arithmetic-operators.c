#include <stdio.h>
int main() {
    int firstNumber, secondNumber;

    printf("Enter two integers (second number must not be 0): ");
    scanf("%d %d", &firstNumber, &secondNumber);

    printf("Addition = %d\n", firstNumber + secondNumber);
    printf("Subtraction = %d\n", firstNumber - secondNumber);
    printf("Multiplication = %d\n", firstNumber * secondNumber);
    printf("Divison = %d\n", firstNumber / secondNumber);
    printf("Remainder = %d\n", firstNumber % secondNumber);

    return 0;

}