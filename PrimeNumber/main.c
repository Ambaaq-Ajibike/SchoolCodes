#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(int argc, char *argv[]) {
	int number, i;
	printf("Enter number: ");
	scanf("%d", &number);
	bool isPrime = true;
	for(i = 2; i <= number/2; i++)
	{
		if(number % i == 0)
		{
			isPrime = false;
			printf("%d is not a prime number\n", number);
			break;
		}
	}
	if(isPrime)
	{
		printf("%d is a prime number\n", number);
	}
}
