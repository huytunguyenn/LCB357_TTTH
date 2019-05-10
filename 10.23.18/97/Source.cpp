#include "stdio.h"
#include "iostream"


void Goi(int n)
{
	char goi;
	switch (n)
	{
	case 1: printf("Mot\t"); break;
	case 2:printf("Hai\t"); break;
	case 3: printf("Ba\t"); break;
	case 4: printf("Bon\t"); break;
	case 5: printf("Nam\t"); break;
	case 6: printf("Sau\t"); break;
	case 7:printf("Bay\t"); break;
	case 8: printf("Tam\t"); break;
	case 9: printf("Chin\t"); break;
	default: printf("Khong\t"); break;
	}
}
void main()
{


	int n, so1;
	int k = 1;
	do{
		system("cls");
		printf("Nhap so:");
		scanf("%d", &n);
		if (!(n > 0))
			printf("Nhap lai di tml!\n");
		system("pause");
	} while (!(n > 0));

	while (k * 10 < n) // TACH SO CACH 1
 	{
		k *= 10;
	}
	while (k > 0)
	{
		so1 = n / k;
		n = n%k;
		k /= 10;
		Goi(so1);
	}
}