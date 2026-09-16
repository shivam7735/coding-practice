#include <stdio.h>
int main(){
    int firstNumber, secondNumber;
    printf("Enter two integers: ");
    scanf("%d %d", &firstNumber, &secondNumber);

    if (firstNumber > secondNumber)
    {
        printf("%d is larger\n", firstNumber);
    }
    else if (secondNumber > firstNumber)
    {
        printf("%d is larger\n", secondNumber);
    }
    else {
        printf("Both numbers are equal\n");
    }
    return 0;
    
}