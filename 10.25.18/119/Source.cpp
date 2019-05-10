#include "stdio.h"

void main()
{
	int n;
	printf("Nhap so:");
	scanf("%d", &n);
	int tong = 0;
	for (int i = 1; i < n; i++)
	{
		if (n%i == 0)
			printf("Uoc la %d\n", i);
			tong = tong + i;
	}
	printf("\nTong uoc so cua %d la %d\n",n,tong);
}