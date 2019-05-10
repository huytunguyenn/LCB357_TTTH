#include "stdio.h"


void NhapSo(int &a);
int KtraSNT(int j);


void main()
{
	int n;
	int so;
	NhapSo(n);
	so = n - 1;
	while (KtraSNT(so) == 0)
	{
		so--;
	}
	printf("%d\n", so);
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




