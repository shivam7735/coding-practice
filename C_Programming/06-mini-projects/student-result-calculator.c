// 1. Take marks for five subjects
// 2. Calculate Total
// 3. Show pass/fail 
// 4. Show grade

#include <stdio.h>
float calculatePercentage(float total) {
    return (total/500)*100;
}

void showGrade(float percentage){
    if (percentage >= 90){
        printf("Grade = A+\n");
    }

    else if (percentage >= 80){
        printf("Grade = A\n");
    }

    else if (percentage >= 70){
        printf("Grade = B\n");
    }

    else if (percentage >= 60){
        printf("Grade = C\n");
    }

    else if (percentage >= 40){
        printf("Grade = D\n");
    }

    else {
        printf("Grade = F\n");
    }
}

int main (){
    float mark1, mark2, mark3, mark4, mark5;
    float total, percentage;

    printf("Enter marks for five subjects: ");
    scanf("%f %f %f %f %f", &mark1, &mark2, &mark3, &mark4, &mark5);

    total = mark1 + mark2 + mark3 + mark4 + mark5;
    percentage = calculatePercentage(total);

    printf("\n Total = %.2f out of 500\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (mark1 >= 40 && mark2 >= 40 && mark3 >= 40 && mark4 >= 40 && mark5 >= 40){
        printf("Result = Pass\n");

    }
    else {
        printf("Result = Fail\n");
    }

    showGrade(percentage);
    
    return 0;
}