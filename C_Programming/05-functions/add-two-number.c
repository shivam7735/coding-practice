#include <stdio.h>

void addNumbers(){
    int firstNumber, secondNumber;
    printf("Enter two numbers: ");
    scanf("%d %d", &firstNumber, &secondNumber);

    printf("Sum = %d\n", firstNumber + secondNumber);
}
int main(){
    addNumbers();
    return 0;
}

