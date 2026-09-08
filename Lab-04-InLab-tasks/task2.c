#include <stdio.h> 
int main() {
	printf("Enter three numbers: ");
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a>b && a>c) {
		printf("\n%d is greatest", a);
	}
	else if(b>a && b>c) {
		printf("\n%d is greatest", b);
	}
	else if(c>a && c>b) {
		printf("\n%d is greatest", c);
	} else {
		printf("\nAll are equal");
	}
}