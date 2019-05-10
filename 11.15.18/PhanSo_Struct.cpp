// PhanSo_Struct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define SIZE 100
struct PHANSO
{
	int tu;
	int mau;
};
PHANSO Tao1PS()
{
	PHANSO p;
	p.tu = rand() % 20;
	p.mau = rand() % 20+1;
	return p;
}
void TaoMangPhanSo(PHANSO A[], int n)
{
	for (int i = 0; i < n; i++)
		A[i] = Tao1PS();
}
void Xuat1PS(PHANSO p)
{
	printf(" %d/%d ",p.tu,p.mau);
}
void XuatMangPhanSo(PHANSO A[], int n)
{
	for (int i = 0; i < n; i++)
		Xuat1PS(A[i]);
}
PHANSO Cong2PS(PHANSO a, PHANSO b)
{

}
PHANSO TongMangPS(PHANSO A[], int n)
{
	PHANSO tong;
	tong.tu = 0;
	tong.mau = 1;
	for (int i = 0; i < n; i++)
		tong = Cong2PS(tong + A[i]);
	return tong;
}
void main()
{
	int n = 10;
	PHANSO A[SIZE];
	TaoMangPhanSo(A, n);
	printf("Mang phan so ban dau: ");
	XuatMangPhanSo(A, n);

	_getch();
}

