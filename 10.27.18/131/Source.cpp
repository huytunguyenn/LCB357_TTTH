#include "stdio.h"

void NhapSo(int &a);
void TinhTong131(int n);
void TinhTong135(int n);
void TinhTong143(int n);

void main()
{
	int n;
	NhapSo(n);
	TinhTong143(n);
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

void TinhTong131(int n)
{
	int tong = 0;
	printf("S=");
	for (int i = 1; i <= n; i++)
	{
		tong += i;
		if (i == n)
			printf("%d", i);
		else
		printf("%d+",i);
	}
	printf("=%d\n", tong);
}

void TinhTong135(int n)
{
	float s = 0;
	printf("S= ");
	for (int i = 1; i <= n; i++)
	{
		s = s + (float)1/(2 * i);
		if (i == n)
		{
			printf("1/%d = %.2f\n", 2*i, s);
		}
		else
		{
			printf("1/%d + ", 2*i);
		}
		
	}
}

void TinhTong143(int n)
{
	int s = 0;
	int truoc = 1;
	for (int i = 1; i <= n; i++)
	{
		truoc *= i;
		s += truoc;
	}
	printf("S = %d\n", s);
}


