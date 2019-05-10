#include "stdio.h"

//void main()
//{
//
//	int n;
//	int dem = 0;
//	printf("Nhap so:");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (n%i == 0)
//		{
//			printf("%5d", i);
//			dem++;
//		}
//	}
//	printf("\n %d co %d uoc so\n",n,dem);
//
//}



#include <stdio.h>

long factorial(int);

int main()
{
	int i, n, c;

	printf("Enter the number of rows you wish to see in pascal triangle\n");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (c = 0; c <= (n - i - 2); c++)
			printf(" ");

		for (c = 0; c <= i; c++)
			printf("%ld ", factorial(i) / (factorial(c)*factorial(i - c)));

		printf("\n");
	}

	return 0;
}

long factorial(int n) //giaithua
{
	int c;
	long result = 1;

	for (c = 1; c <= n; c++)
		result = result*c;

	return result;
}