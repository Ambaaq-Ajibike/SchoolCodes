#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int number;
	printf("Enter the number to reverse: ");
	scanf("%d", &number);
	while (number > 0)
	{
		int lastDigit = number%10;
		printf("%d", lastDigit);
		number /= 10;
	}
}
