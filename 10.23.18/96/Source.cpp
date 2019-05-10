#include "stdio.h"
#include "conio.h"

void main()
{
	int n;
	printf("Nhap so:");
	scanf("%d", &n);
	int dv,tram,chuc;
		dv = n % 10;
		tram = n / 100;
		chuc = (n / 10) % 10;
		printf("So hang don vi la %5d\n", dv);
		printf("So hang chuc la %5d\n", chuc);
		printf("So hang tram la %5d\n", tram);
}