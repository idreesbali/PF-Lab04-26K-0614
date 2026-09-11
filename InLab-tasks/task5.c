#include <stdio.h>
int main() {
    printf("Enter first number: ");
    float n1, n2,sum,div, product, subt;
    scanf("%f", &n1);
    printf("Enter operator(+, -, *, /): ");
    char op;
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%f", &n2);
    switch(op) {
        case '+':
            sum = n1+n2;
            printf("Answer: %.2f", sum);
            break;
        case '-':
            subt = n1-n2;
            printf("Answer: %.2f", subt);
            break;
        case '*':
            product = n1*n2;
            printf("Answer: %.2f", product);
            break;
        case '/':
            if(n2==0) {
                printf("Error: Division by zero not allowed");
                return 0;
            }
            div = n1/n2;
            printf("Answer: %.2f", div);
            break;
        default: 
            printf("Invalid choice of operator");
            break;
    }
    return 0;

}