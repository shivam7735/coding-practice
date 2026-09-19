#include <stdio.h>
int main() {
    int row, column;
    
    for (row = 1; row <= 3; row ++){
        for (column = 1; column <= 6; column ++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}