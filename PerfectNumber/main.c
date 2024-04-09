#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int number, i;
	printf("Enter number: ");
	scanf("%d", &number);
	int sum = 0;//issue
	for(i = 1; i <= number/2; i++)
	{
		if(number % i == 0)
		{
			sum += i;
			
		}
	}
	
	if(sum == number)
	{
		printf("%d is a perfect number", number);
	}
	else{
		printf("%d is not a perfect number", number);
	}
	
}
