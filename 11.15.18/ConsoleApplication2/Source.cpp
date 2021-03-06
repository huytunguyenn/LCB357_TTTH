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
void TaoMangNgauNhien(int **A, int row, int col)
{
	int min = 1, max = 30;
	for (int i = 0; i < row; i++)//coi giai thich clip trong dt
	{
		A[i] = new int[col];
		if (A[i] == NULL)
			exit(1);
	}
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			A[i][j] = (rand() % (max - min + 1)) + min;
}
void XuatMang(int **A, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			printf("%5d", A[i][j]);
		printf("\n");
	}
}
void main()
{
	int **A, d, c;//** la mang 2 chieu, giai thich hinh tren bang trong clip tren dt, * ban dau la mang chi den o dau tien cua cai mang *
	srand((unsigned int)time(NULL));

	NhapN(&d);//nhap dong
	NhapN(&c);//nhap cot
	A = new int*[d];
	if (A == NULL)
		exit(1);

	TaoMangNgauNhien(A, d, c);
	printf("Mang vua tao: ");
	XuatMang(A, d, c);

	free(A);
	_getch();
}
