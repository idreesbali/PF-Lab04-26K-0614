#include <stdio.h>
void main() {
    int units, bill;
    printf("Enter units consumed: ");
    scanf("%d", &units);
    if(units<=100) {
        bill=5*units;
        printf("Total Bill: Rs. %d", bill);
    } else if(units>=101 && units<=200) {
        bill=(5*100)+((units-100)*8);
        printf("Total Bill: Rs. %d", bill);
    } else if(units>=201 && units<=400) {
        bill=(5*100)+(8*100)+((units-200)*12);
        printf("Total Bill: Rs. %d", bill);
    } else if(units>400) {
        bill=(5*100)+(8*100)+(12*200)+((units-400)*15);
        printf("Total Bill: Rs. %d", bill);
    }
}