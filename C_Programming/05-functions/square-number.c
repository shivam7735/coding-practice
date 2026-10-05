#include <stdio.h>
int square(int number){
    return number*number;

}
int main (){
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);

    result = square(number);

    printf("Result = %d\n", result);

    return 0;
}