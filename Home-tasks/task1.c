#include <stdio.h>
void main() {
    float weight, height, bmi;
    printf("Enter weight(kg): ");
    scanf("%f", &weight);
    printf("Enter height(m): ");
    scanf("%f", &height);
    bmi = weight / (height*height);
    printf("BMI = %.2f", bmi);
    if(bmi<18.5) {
        printf(" -> Category: Underweight");
    } else if(bmi>=18.5 && bmi<=24.9) {
        printf(" -> Category: Normal");
    }
    else if(bmi>=25.0 && bmi<=29.9) {
        printf(" -> Category: Overweight");
    }
    else if(bmi>=30.0) {
        printf(" -> Category: Obese");
    }
}