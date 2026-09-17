#include <stdio.h>
int main(){
    int number, sum = 0, current;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    for (current = 1; current <= number; current ++)
    {
        sum = sum + current;
    }

    printf("Sum from 1 to %d = %d\n", number, sum);
    
    return 0;
}