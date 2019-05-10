#include "stdio.h"


void Nhap(int &n)
{
	do{
		printf("Nhap so:");
		scanf("%d", &n);
		if (!(n > 0))
			printf("Nhap lai");
	} while (!(n > 0));
}

void TinhTong(int n)
{
	int tong = 0;
	for (int i = 1; i <= n; i++)
	{
		if (!(i%2==0))
		{
			tong += i;
			
				printf("%d+", i);
		}
	}
}

void main()
{
	int n;
	Nhap(n);
	TinhTong(n);
}