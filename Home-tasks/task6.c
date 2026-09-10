#include <stdio.h>
#include <stdlib.h>
void main() {
    int ch=0, num, i, prime=1;
    printf("1. Even/Odd     2. Prime    3. Square   4. Exit");
    while(ch != 4) {
    printf("\nEnter choice: ");
    scanf("%d", &ch);
    switch(ch) {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            if(num%2==0) {
                printf("%d is Even", num);
            } else {
                printf("%d is Odd", num);
            }
            break;
        case 2:
            prime = 1;
            printf("Enter a number: ");
            scanf("%d", &num);
            if(num==0 || num==1 || num<0) {
                printf("%d is not a Prime Number");
            } else {
                for(i = 2; i<num; i++) {
                    if(num%i==0) {
                        prime=0;
                        break;
                    }
                }
                if(prime==1) {
                    printf("%d is a Prime Number", num);
                } else {
                    printf("%d is not a Prime Number", num);
                }
                
            }
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Squared: %d", num*num);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid Input");
            break;
    } 
} 
}