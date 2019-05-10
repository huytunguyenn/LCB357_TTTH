#include "stdio.h"


//for (int i = 2; i <= n; i++)   phu thuoc n o day
//{
//	while (n%i == 0)
//	{
//		printf(i);  n bi tac dong nen dung for ko tot lam
//		n=n/i
//	}
//}
//
//main: - nhap so
//	pt
//	nhap
//	nhap
//	nhap
//	uscln3so<-uscln
//






void PhanTichThuaSoNT(int n)
{
	int i = 2;
	printf("%d=", n);
	while (n > 0)
	{
		while ((n%i == 0) && (n>1))
		{
			printf("%3d", i);
			n = n / i;
		}
		i++;
	}

}

int USCLN(int x, int y)
{
	while (x != y)
	{
		if (x > y)
			x -= y;
		else
			y -= x;
	}
	return x;
}

int USCLN3So(int a, int b,int c)
{
	int us = USCLN(a, b);
	int bs = a*b / us;
	us = USCLN(bs, c);
	return bs*c / us;
}