#include <stdlib.h>
#include <stdio.h>

int main() {

	int a, b, sum = 0;
	int i,k;

	printf("Enter a number: ");
	scanf_s("%d", &a);

	printf("Enter another number: ");
	scanf_s("%d", &b);

	if (a > b) {
		for (i = b;i <= a;i++)
		{
			sum = sum + i;
		}
		printf("Sum: %d\n", sum);
	}
	else if (b > a) {
		for (k = a;k <= b;k++)
		{
			sum = sum + k;
		}
		printf("Sum: %d\n", sum);
	}
	else {
		sum = a + b;
		printf("Sum: %d\n", sum);
	}
	
	system("pause");
}