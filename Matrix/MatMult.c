#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int Arow, Brow, Acol, Bcol;
	printf("Enter the number of rows in matrix A: ");
	scanf("%d", &Arow);
	printf("Enter the number of columns in matrix A: ");
	scanf("%d", &Acol);
	
	printf("Enter the number of rows in matrix B: ");
	scanf("%d", &Brow);
	printf("Enter the number of columns in matrix B: ");
	scanf("%d", &Bcol);
	
	if(Acol != Brow)
	{
		printf("For matrices multiplication, the number of columns in A must be equal to the number of rows in B");
		return 0;
	}
	int A[Arow][Acol], B[Brow][Bcol], C[Arow][Bcol], i, j, k;
	
	printf("Enter elements for the first Matrix (A)\n");
	for(i = 0; i < Arow; i++)
	{
		for(j = 0; j < Acol; j++)
		{
			printf("Enter A at %d, %d: ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}
	
	
	printf("Enter elements for the Second Matrix (B)\n");
	for(i = 0; i < Brow; i++)
	{
		for(j = 0; j < Bcol; j++)
		{
			printf("Enter B at %d, %d: ", i+1, j+1);
			scanf("%d", &B[i][j]);
		}
	}
	
	
	for(i = 0; i < Arow; i++)
	{
		for(j = 0; j < Bcol; j++)
		{
			int sum = 0;
			for(k = 0; k < Acol; k++)
			{
				sum += A[i][k] * B[k][j];
			}
			C[i][j] = sum;
		}
	}
	
	for(i = 0; i < Arow; i++)
	{
		for(j = 0; j < Bcol; j++)
		{
			printf("%d\t", C[i][j]);			
		}
		printf("\n");
	}
	return 0;
}
