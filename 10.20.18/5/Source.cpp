#include <stdio.h>
#include <conio.h>
#include <iostream>

void main()
{
	int n;
	printf("Nhap so:");
	scanf("%d", &n);
	int dem=0;
	int tong = 0;
	while (dem <= n)
	{
		if (((dem % 3 == 0) && (dem % 5 == 0)) || ((dem % 3 == 2) && (dem % 5 == 3)))
		{
			tong = tong + dem;
		}
		dem++;
	}
	printf("Ket qua:%d\n", tong);
}