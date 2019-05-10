#include "stdio.h"
#include "iostream"


void Nhap(int &n)
{
	printf("Nhap do dai canh: ");
	scanf("%d", &n);
}
void InMenu()
{
	printf("1.Nhap du lieu.\n2.In\n3.Thoat.\nLua chon cua ban:");
}

void Hinh1(int n)
{
	for (int d = 1; d <= n; d++)
	{
		for (int c = 1; c <= n; c++)
		{
			if (d + c <= n + 1)
				printf(" * ");
			else printf("   ");
		}
		printf("\n");
	}
}
void HamThucThi(int lc,int &n)
{
	switch (lc)
	{
	case 1: Nhap(n); break;
	case 2: Hinh1(n); break;
	}
}




void main()
{
	int n,lc;
	do{
		system("cls");
		InMenu();
		scanf("%d", &lc);
		HamThucThi(lc,n);
	} while (lc != 3);

}