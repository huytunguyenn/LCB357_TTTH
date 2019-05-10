#include <stdio.h>
#include <conio.h>
#include <iostream>

// viet bang for
void main()
{
	int n;
	printf("Nhap so:");
	scanf("%d", &n);
	int tong = 0;
	for (int i = 1; tong+i<=n; i++)
	{
		tong = tong + i;
		if(tong+i<n)
		printf("%d+", i);
		else printf("%d", i);
	}
	printf("<=%d\n", n);
}

// viet bang while
/*void main()
{
	int n;
	printf("Nhap so:");
	scanf("%d", &n);
	int tong = 0;
	printf("0");
	int i = 1;
	while ((tong+i)<=n)
	{
		tong = tong + i;
		printf("+%d", i);
		i++;
	}
	printf("<=%d\n", n);
}*/


