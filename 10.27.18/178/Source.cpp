#include "stdio.h"

int KtraSNT(int n);
void NhapSo(int &a);

void main()
{
	int n;
	NhapSo(n);
	printf("Cac so nguyen to nho hon %d la:\n", n);
	for (int j = 1; j < n; j++)
	{
		if (KtraSNT(j))
			printf("%d ", j);
	}

}
void NhapSo(int &a)
{
	do
	{
		printf("Nhap so:");
		scanf("%d", &a);
		if (!(a > 0))
			printf("Nhap lai.\n");
	} while (!(a > 0));
}

int KtraSNT(int j)
{
	int souoc = 0;
	for (int i = 1; i <= j; i++)
	{
		if (j%i == 0)
		{
			souoc++;
		}
	}
	return(souoc == 2);
}