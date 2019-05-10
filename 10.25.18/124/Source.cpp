#include "stdio.h"
void Nhap(int &a, int &b);
int USCLN(int a, int b);
void main()
{
	int a, b;
	do{
		Nhap(a, b);
		if (!((a > 0) && (b > 0)))
			printf("Buon ngu ha?\n");
	} while (!((a > 0) && (b > 0)));
	printf("Uoc so chung lon nhat cua %d va %d la: %d\n", a, b, USCLN(a, b));

}
void Nhap(int &a,int &b)
{
	printf("Nhap so:");
	scanf("%d", &a);
	printf("Nhap so:");
	scanf("%d", &b);
}

int USCLN(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}

// BSCNN = A*B-USCLN,130,123