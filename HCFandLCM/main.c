#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	int hcf = HCF(a, b);
	int lcm = LCM(a, b, hcf);
	printf("The HCF is %d\n", hcf);
	printf("The LCM is %d", lcm);
	return 0;
}
int HCF(int num1, int num2)
{
	int x = num1;
	int y = num2;
	int r = 0;
	while(y != 0)
	{
		r = y % x;
		x = y;
		y = r;
	}
	return x;
}
int LCM(int a, int b, int hcf)
{
	return ((a*b)/hcf);
}
