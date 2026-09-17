#include <stdio.h>
int main(){
    int number, current;
    long long factorial = 1;

    printf("Enter a non negative integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers\n");
    }
    else {
       for (current = 1; current <= number; current ++)
    
            factorial = factorial * current;
    }

    printf("%d! = %lld\n", number, factorial);
    
    return 0;
        

    
}