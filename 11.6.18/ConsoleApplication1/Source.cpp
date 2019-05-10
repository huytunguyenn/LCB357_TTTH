#include "stdio.h"
#include "iostream"
#include "time.h"
#define ROWS 100
#define COLS 200
void RandArr(int A[][COLS], int d, int c);
void Xuat(int A[][COLS], int d, int c);
int NhapSo(int &d);
void ListEven(int A[][COLS], int d, int c);
int Prime(int x);
void ListPrime(int A[][COLS], int d, int c);
int EvenCount(int A[][COLS], int d, int c);
int PrimeCount(int A[][COLS], int d, int c);
int EvenSumOfRowsCols(int A[][COLS], int d, int c);
int MaxArr(int A[][COLS], int d, int c);
void DemLoaiSo(int A[][COLS], int d, int c, int B[]);
void DemSoXuatHien(int A[][COLS], int d, int c, int B[]);
void main()
{
	int A[ROWS][COLS];
	int d, c;
	printf("Nhap so dong: ");
	d = NhapSo(d);
	printf("Nhap so cot: ");
	c = NhapSo(c);
	RandArr(A,d,c);
	printf("Mang 2 chieu da tao la:\n");
	Xuat(A, d, c);
	printf("So chan trong mang 2 chieu da tao la:\n");
	ListEven(A, d, c);
	printf("So nguyen to trong mang 2 chieu da tao la:\n");
	ListPrime(A, d, c);
	printf("Co %d so chan trong ham.\n", EvenCount(A, d, c));
	printf("Co %d so nguyen to trong ham.\n", PrimeCount(A, d, c));
	printf("Tong cua cac o co so dong cong so cot la so chan la %d\n", EvenSumOfRowsCols(A, d, c));
	printf("So lon nhat trong mang la %d\n", MaxArr(A, d, c));
	// dem loai so 
	int B[20] = { 0 };
	DemLoaiSo(A, d, c, B);
	int nB;
	nB = 20 - 0 + 1;//nB= max - min + 1;
	printf("Cac so co trong mang 2 chieu la:");
	for (int i = 0; i < nB; i++)
	{
		if (B[i] == 1)
			printf("%5d", i);
	}
	// dem so lan xuat hienint B[20] = { 0 };
	printf("\n");
	DemSoXuatHien(A, d, c, B);
	for (int i = 0; i < nB; i++)
	{
		if (B[i] >= 1)
			printf("So %d xuat hien %d lan\n", i,B[i]-1);
	}
}
int NhapSo(int &d)
{
	scanf("%d", &d);
	return d;
}
void RandArr(int A[][COLS], int d, int c)
{
	srand((unsigned int)time(NULL));
	int min = 0, max = 20;
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			A[i][j] = rand() % (max - min + 1) + min;
		}
	}
}
void Xuat(int A[][COLS], int d, int c)
{
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("% 5d", A[i][j]);
		}
		printf("\n");
	}
}
void ListEven(int A[][COLS],int d,int c)
{
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (A[i][j] % 2 == 0)
				printf("%5d", A[i][j]);
			else
				printf("     ");
		}
		printf("\n");
	}

}
void ListPrime(int A[][COLS], int d, int c)
{
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (Prime(A[i][j]))
				printf("%5d", A[i][j]);
			else printf("     ");
		}
		printf("\n");
	}
}
int Prime(int x)
{
	int dem = 0;
	for (int i = 1; i <= x; i++)
	{
		if (x%i == 0)
			dem++;
	}
	return(dem == 2);
}
int EvenCount(int A[][COLS], int d, int c)
{
	int dem=0;
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
			if (A[i][j] % 2 == 0)
				dem++;
	}
	return dem;
}
int PrimeCount(int A[][COLS], int d, int c)
{
	int dem = 0;
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
			if (Prime(A[i][j]))
				dem++;
	}
	return dem;
}
int EvenSumOfRowsCols(int A[][COLS], int d, int c)
{
	int sum = 0;
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if ((i + j) % 2 == 0)
				sum += A[i][j];
		}
	}
	return sum;
}
int MaxArr(int A[][COLS], int d, int c)
{
	int max = A[0][0];
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (A[i][j]>max)
				max = A[i][j];
		}
	}
	return max;
}
void DemLoaiSo(int A[][COLS],int d, int c,int B[])
{
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			B[A[i][j]]=1;
		}
	}
}
void DemSoXuatHien(int A[][COLS], int d, int c, int B[])
{
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			B[A[i][j]]++;
		}
	}
}
//tim hieu bai toan so may man