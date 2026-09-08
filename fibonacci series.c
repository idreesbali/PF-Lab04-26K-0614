#include <stdio.h>
int main() {
	int a =0, b =1, count=1 ;
	printf("Enter a number to genearte fibonacci series til that number: ");
	int num;
	scanf("%d", &num);
	if(num < 0) {
		printf("Invalid input");
	}
	else if(num==0) {
		printf("%d",a);
	} 
		while(count<=num) { 
		printf("%d ", a);
		int temp  = a+b;
		a=b;
		b=temp;
		count++;
	}
	
	return 0;
}