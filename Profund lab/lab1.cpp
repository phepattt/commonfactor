#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// lab 1 

int main()
{
	int A, B = 2;
	printf("Enter number : ");
	scanf("%d", &A);
	printf("Factoring reslut : ");
	while (B < A && B >= 2)
	{
		if (A % B == 0)
		{
			printf("%d x ", B);
			A = A / B;
		}
		else B = B + 1;

	}
	if (B = A)
	{
		printf(" %d ", B);
	}
}
