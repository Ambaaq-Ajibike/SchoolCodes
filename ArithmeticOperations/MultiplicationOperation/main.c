#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int Num1[100], Num2[100], num1Length, num2Length, i, j, rem, result, sum;
	
	printf("Enter the first array length: ");
	scanf("%d", &num1Length);
	
	for(i = 0; i < num1Length; i++)
	{
		printf("Enter first element at [%d]\n", i + 1);
		scanf("%d", &Num1[i]);
	}
	
	for(i = 0; i < num2Length; i++)
	{
		printf("Enter second array element at [%d]\n", i + 1);
		scanf("%d", &Num2[i]);
	}
	rem = 0;
	for(i = 0; i < num1Length; i++)
	{
		for(j = 0; j < num2Length; j++)
		{
			result = (Num1[i] * Num2[j]) + rem
		}
	}
}
