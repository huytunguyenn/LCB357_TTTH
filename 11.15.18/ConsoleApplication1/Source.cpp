#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void NhapN(int *n)
{
	do
	{
		printf("Nhap so duong: ");
		scanf("%d", &(*n));
	} while (n < 0);
}
void TaoMangNgauNhien(int *A, int n)
{
	int min = 1, max = 30;
	int *p = A;
	for (int i = 0; i < n; i++)
		*(p + i) = (rand() % (max - min + 1)) + min;
	//Cach lam binh thuong: A[i] = (rand() % (max - min + 1)) + min;
}
void XuatMang(int *A, int n)
{
	int *p = A;
	for (int i = 0; i < n; i++)
		printf("%5d", *(p + i));
	//Cach lam binh thuong: printf("%5d",A[i]);
}
void HoanVi(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void Sort(int *A, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (A[i]>A[j])
				HoanVi(&A[i], &A[j]);
}
void main()
{
	int *A, n;
	srand((unsigned int)time(NULL));
	NhapN(&n);
	A = new int[n];
	TaoMangNgauNhien(A, n);
	printf("Mang vua tao: ");
	XuatMang(A, n);
	printf("\nMang sau khi sort tang dan: ");
	Sort(A, n);
	XuatMang(A, n);
	free(A);
	_getch();
}
