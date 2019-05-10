#include "stdio.h"
#include "iostream"
#define MAX 100


void InMenu()
{

	printf("1.Nhap mang.\n2.Tao mang ngau nhien.\n3.Xuat mang.\n4.Thoat.\nLua chon cua ban:");
}


void Nhap(int a[], int &n)
{
	do{
		printf("Nhap so phan tu cho mang:");
		scanf("%d", &n);
		if ((n > 100) || (n < 1))
			printf("Vui long nhap lai!\n");
	} while ((n > 100) || (n < 1));
	system("cls");
	for (int i = 0; i < n; i++)
	{
		printf("Nhap gia tri cho vi tri thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Gia tri thu %d la: %d\n", i + 1, a[i]);
	}
	system("pause");
}

void HamThucThi(int lc,int a[],int &n)
{
	switch (lc){
	case 1: system("cls"); Nhap(a, n); break;
	case 2:
	case 3: system("cls"); Xuat(a, n); break;
	}
}

void main()
{
	int a[MAX];
	int n,lc;
	do{
		system("cls");
		InMenu();
		scanf("%d", &lc); 
		HamThucThi(lc, a, n);

	} while (lc != 4);


}