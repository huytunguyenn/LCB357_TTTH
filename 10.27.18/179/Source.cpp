#include "stdio.h"

void NhapSo(int &a);
int KtraSNT(int n);
int SoSNT(int n);

void main()
{
	int n;
	NhapSo(n);
	printf("Co %d so nguyen to nho hon %d",SoSNT(n), n);


}
void NhapSo(int &a)
{
	do
	{
		printf("Nhap so:");
		scanf("%d", &a);
		if (!(a > 0))
			printf("Nhap lai.\n");
	} while (!(a > 0));
}

int KtraSNT(int j)
{
	int souoc = 0;
	for (int i = 1; i <= j; i++)
	{
		if (j%i == 0)
		{
			souoc++;
		}
	}	
	return(souoc == 2);
}

int SoSNT(int n)
{
	int dem=0;
	for (int j = 1; j < n; j++)
	{
		if(KtraSNT(j))
			dem++;
	}
	return dem;
}