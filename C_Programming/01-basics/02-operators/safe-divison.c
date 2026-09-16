#include <stdio.h>
int main(){
    float firstNumber, secondNumber;

    printf("Enter two numbers: ");
    scanf("%f %f", &firstNumber, &secondNumber);

    if (secondNumber != 0){
        printf("Result = %.2f\n", firstNumber / secondNumber);
    }
    else {
        printf("Cannot divide by zero\n");
    }

    return 0;

}