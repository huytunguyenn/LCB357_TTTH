#include "stdio.h"


void Nhap(int &n, int&m);
void XuatUocSo(int n, int m);



void main()
{
	int n;
	int m;
	Nhap(n, m);
	XuatUocSo(n, m);
}



void Nhap(int &n, int &m)
{
	do{
		printf("Nhap n:");
		scanf("%d", &n);
		printf("Nhap m:");
		scanf("%d", &m);
		if (!(n > m))
			printf("Buon ngu ha ma??\n");
	} while (!(n > m));
}


void XuatUocSo(int n, int m)
{
	printf("Cac uoc so cua %d nho hon %d:\n", n, m);
	for (int i = 1; i < m; i++)
	{
		if (n%i == 0)
			printf("%d\n", i);
	}
}
