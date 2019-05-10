#include <stdio.h>
#include <conio.h>
#include <iostream>



void main()
{
	do{

		int n = 100;						// gan dai de thuc hien vong lap
		int tong = 0;
		while (n != 0)
		{
			printf("Nhap so (0 la ket thuc):");
			scanf("%d", &n);
			tong = tong + n;			// thuc hien sau thi ko dinh so 100
		}
		printf("Ket qua: %d\n", tong);


	} while (1>0);
}


