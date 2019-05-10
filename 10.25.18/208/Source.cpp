#include "stdio.h"

void Nhap(int &a);
int Factorial(int n);


void main()
{
	int n, k;    // tinh Ckn=n!/(n-k)!k!
	printf("Nhap n truoc, k sau\n");
	do{
		Nhap(n);
		Nhap(k);
		if (!(n >= k))
			printf("Nhap lai dum di!!!\n");
	} while (!(n >= k));
	int c;
	c = Factorial(n) / (Factorial(k)*Factorial(n - k));
	printf("To hop chap %d cua %d la: %d\n", k, n,c);
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