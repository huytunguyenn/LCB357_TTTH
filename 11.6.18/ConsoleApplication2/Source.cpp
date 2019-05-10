#include "stdio.h"
#include "iostream"
#include "time.h"
#define ROWS 100
int NhapSo();
void RandArr(int A[][ROWS], int r);
void Xuat(int A[][ROWS], int r);
int TongTren(int A[][ROWS], int r);
int TongDuoi(int A[][ROWS], int r);
void main()
{
	int A[ROWS][ROWS];
	int r;
	r = NhapSo();
	RandArr(A,r);
	Xuat(A, r);
	printf("Tong tren duong cheo chinh la:%d\n", TongTren(A, r));
	printf("Tong duoi duong cheo chinh la:%d\n", TongDuoi(A, r));
}
int NhapSo()
{
	int r;
	printf("Nhap so dong cho ma tran vuong:");
	scanf("%d", &r);
	return r;
}
void RandArr(int A[][ROWS], int r)
{
	srand((unsigned int)time(NULL));
	int max = 20, min = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r; j++)
			A[i][j] = rand() % (max - min + 1) + min;
	}
}
void Xuat(int A[][ROWS], int r)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r; j++)
			printf("%5d", A[i][j]);
		printf("\n");
	}
}
int TongTren(int A[][ROWS], int r)
{
	int sum = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r; j++)
		{
			if (i < j)
				sum += A[i][j];
		}
	}
	return sum;
}
int TongDuoi(int A[][ROWS], int r)
{
	int sum = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r; j++)
		{
			if (i > j)
				sum += A[i][j];
		}
	}
	return sum;
}