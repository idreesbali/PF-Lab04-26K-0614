#include <stdio.h>
void main() {
    float l1, l2, l3;
    printf("Enter three side lenghts: ");
    scanf("%f %f %f", &l1, &l2, &l3);  
    if( ((l1+l2)>l3) && ((l2+l3)>l1) && ((l1+l3)>l2) ) {
        printf("Valid triangle");
        if(l1==l2 && l2==l3){
            printf(" -> Type: Equilateral");
        } else if((l1==l2) || (l2==l3) || (l1==l3)) {
            printf(" -> Type: Isosceles");
        } else {
            printf(" -> Type: Scalene");
        }
    } else {
        printf("Invalid triangle");
    }     
}