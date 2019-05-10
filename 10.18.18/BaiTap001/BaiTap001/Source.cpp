#include <stdio.h>
#include <conio.h>


int TimMax(int a, int b, int c)
{
	int max;
	if ((a >= b) && (a >= c))
	{
		max = a;
	}
	else if ((b >= a) && (b >= c))
	{
		max = b;
	}
	else max = c;
	return max;
}



int TimMin(int a, int b, int c)
{
	int min;
	if ((a <= b) && (a <= c))
	{
		min = a;
	}
	else if ((b <= a) && (b <= c))
	{
		min = b;
	}
	else min = c;
	return min;
}




void main()
{

	int n,tram,chuc,donvi;
	printf("Nhap so:");
	scanf("%d", &n);
	tram = n / 100;
	donvi = n % 10;
	chuc = (n / 10) % 10;
	int mid;
	mid = tram + donvi + chuc - TimMin(tram, donvi, chuc) - TimMax(tram, donvi, chuc);
	printf("Chu so lon nhat la:%d\n", TimMax(tram, donvi, chuc));

}