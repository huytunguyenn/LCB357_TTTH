#include "stdio.h"

int ToHopChapKCuaN(int n, int k);
void Nhap(int &a);
int Factorial(int n);


int ToHopChapKCuaN(int n, int k)
{
   // tinh Ckn=n!/(n-k)!k!
	int c;
	c = Factorial(n) / (Factorial(k)*Factorial(n - k));
	return c;
}


void Nhap(int &a)
{
	printf("Nhap so");
	scanf("%d", &a);
}

int Factorial(int n)
{
	for (int i = 1; i <= n; i++)
	{
		n *= i;
	}
	return n;
}



void main()
{
	int hang;
	printf("Nhap so hang:");
	scanf("%d", &hang);
	for (int i = 0; i < hang; i++) // i tuong trung n
	{
		for (int j = 0; j <= i; j++)// j tuong trung k
		{
			printf("%d", ToHopChapKCuaN(i,j));
			printf("\n");
		}
	}
}







