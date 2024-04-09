#include <stdio.h>
#include <stdlib.h>
void input(int *array[100], int *length);
void output(int array[100], int length);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int firstNum[100], secondNum[100], result[100], length;
	
	printf("Enter the first array length: ");
	int i;
	scanf("%d", &length);
	
	for(i = 0; i < length; i++)
	{
		printf("Enter first element at [%d]\n", i + 1);
		scanf("%d", &firstNum[i]);
	}
	
	for(i = 0; i < length; i++)
	{
		printf("Enter second array element at [%d]\n", i + 1);
		scanf("%d", &secondNum[i]);
	}
	for(i = length-1; i >= 0; i--)
	{
		if(firstNum[i] >= secondNum[i] || i == 0)
		{
			result[i] = firstNum[i] - secondNum[i];
		}
		else if(i > 0)
		{
			firstNum[i-1] = firstNum[i-1] - 1;
			result[i] = (10 + firstNum[i])	- secondNum[i];
		}
	}
	output(result, length);
}


void output(int array[100], int length)
{
	int i;
	for(i = 0; i < length; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");
}
