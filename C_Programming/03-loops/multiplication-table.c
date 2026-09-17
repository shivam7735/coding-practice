#include <stdio.h>
int main(){
    int number, current;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (current = 1; current <= 10; current ++)
    {
        printf("%d x %d = %d\n", number, current, number * current);
    }

    return 0;
}