#include <stdio.h>
#include <conio.h>
#include <iostream>


int Tinh(int &n)
{
	int dem = 0;
	int tong = 0;
	while (dem <= n)
	{
		if ((dem % 2) == 1)
		{
			tong = tong + dem;
		}
		dem++;
	}

	return tong;
}


void main()
{

	int n;
	do{
		printf("Nhap n:");
		scanf("%d", &n);
		printf("Ket qua:%d\n", Tinh(n));
		system("pause");
		system("cls");
	} while (1 > 0);
	


}