#include <stdio.h>
int isEven(int number){
    if (number % 2 == 0){
        return 1;
    }
    return 0;
    
}

int main(){
    int number;
    printf("enter a integer: ");
    scanf("%d", &number);

    if(isEven(number)){
        printf("%d is even\n", number);

    } 
    else {
        printf("%d is odd\n", number);

    }
    return 0;
}