#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <iostream>


void InMenu()
{
	printf("1.Vui long 2 nhap so.\n2.Phep +,-,*,:.\n3.Thoat\nLua chon cua ban:");
}

int Cong(int a, int b)
{
	int tong;
	tong = a + b;
	return tong;
}
int Tru(int a, int b)
{
	int hieu;
	hieu = a + b;
	return hieu;
}
int Nhan(int a, int b)
{
	int nhan;
	nhan = a * b;
	return nhan;
}
int Chia(int a, int b)
{
	float chia;
	chia = (float)a / b;
	return chia;
}

void Nhap(int &a, int &b)
{
	printf("Nhap 2 so:");
	scanf("%d%d", &a, &b);
}





void HamThucThi(int lc, int a, int b)
{
	if (lc == 1)
	{
		system("cls");
		Nhap(a, b);
	}
	else if (lc==2)
	{
		char c;
		printf("Nhap phep tinh:");
		c = _getche();
		scanf("%c", &c);
		if (c == '+')
		{
			printf("Ket qua la:%d", Cong(a, b));
			system("pause");
		}
	}
}

int main()
{
	int lenh;
	int a, b;
	do
	{
		InMenu();
		scanf("%d", &lenh);
		HamThucThi(lenh,a,b);

	} while (lenh!=3);
	
	return 0;
}