#include <stdio.h>
#include <conio.h>
#include <iostream>

void HamThucThi(int &n)
{
	int dem = 1;
	while (dem <= n)
	{
		printf("%d\n", dem);
		dem++;
	}
}


void main()
{
	int m;
	
	do{
		printf("Nhap so:");
		scanf("%d", &m);
		HamThucThi(m);
		_getch();
		system("cls");
	} while (1>0);
	_getch();
}