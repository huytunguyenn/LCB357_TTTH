#include "Header.h"

void InMenu()
{
	system("cls");
	printf("1.Nhap gia tri.\n2.Lua chon phep tinh.\n3.Thoat.\nLua chon cua ban:");
}

void Nhap(int &a, int &b)
{
		system("cls");
		printf("Vui long nhap so a:");
		scanf("%d", &a);
		printf("Vui long nhap so b:");
		scanf("%d", &b);
}

int Cong(int a, int b)
{
	int tong;
	tong = a + b;
	return tong;
}

int Tru(int a, int b)
{
	int tru;
	tru = a - b;
	return tru;
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
	chia = (float) a / b;
	return chia;
}

void HamThucThi(int lc, int &a, int &b)
{
	if (lc == 1)
	{
		system("cls");
		Nhap(a, b);
	}
	else if (lc == 2)
	{
		system("cls");
		char c;
		printf("Nhap phep tinh:");
		scanf("%c", &c);
		c = _getche();
		if (c == '+')
		{
			printf("\nKet qua la:%d", Cong(a, b));
		}
		else if (c == '-')
		{
			printf("\nKet qua la:%d", Tru(a, b));
		}
		else if (c == '*')
		{
			printf("\nKet qua la:%d", Nhan(a, b));
		}
		else if (c == '/')
		{
			printf("\nKet qua la:%f", Chia(a, b));
		}
		system("pause");
	}
}
