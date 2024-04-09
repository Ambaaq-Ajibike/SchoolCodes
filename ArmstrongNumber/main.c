#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int GetNumberLength(int number);

int main(int argc, char *argv[]) {
	int number;
	printf("Enter number: ");
	scanf("%d", &number);
	int holder = number;
	int length = GetNumberLength(holder);
	double sum = 0;
	while(holder > 0)
	{
		double lastDigit = holder % 10;
		sum += pow(lastDigit, (double)length);
		holder /= 10;
	}
	if(number == sum){
		printf("%d is an armstrong", number);
		
	}
	else{
		printf("%d is not armstrong", number);
	}
}
int GetNumberLength(int number)
{
	int length;
	while (number > 0)
	{
		number /= 10;
		length++;
	}
	return length;
}
