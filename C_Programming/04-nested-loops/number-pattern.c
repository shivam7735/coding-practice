#include <stdio.h>
int main(){
    int row, number;

    for (row = 1; row <= 3; row ++){
        for (number = 1; number <= 4; number ++){
            printf("%d ", number);
        }
        printf("\n");
    }
    return 0;

}