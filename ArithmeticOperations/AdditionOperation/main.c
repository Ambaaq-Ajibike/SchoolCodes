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
	int div = 0;
	for(i = length-1; i >= 0; i--)
	{
		int add = firstNum[i] + secondNum[i];
		if(i == 0){
			result[i] = div + add;
		}
		else{
			result[i] = div + add%10;
		}
		
		div = add / 10;
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
