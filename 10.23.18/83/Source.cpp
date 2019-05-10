#include "stdio.h"
#include "conio.h"
#include "iostream"
/*
void main()
{
	int n;
	printf("Nhap so:");
	scanf("%d", &n);
	for (int i = 1; i <= 10; i++)
	{
		printf("%3d x %3d = %3d\n", n, i, n*i);
	}
}
*/

void main()
{
	do{
		system("cls");
		int n;
		int i = 1;
		printf("Nhap so:");
		scanf("%d", &n);
		while (i <= 10)
		{
			printf("%3d x %3d = %d\n", n, i, n*i);
			i++;
		}
		system("pause");
	}while( 1 > 0);
}
