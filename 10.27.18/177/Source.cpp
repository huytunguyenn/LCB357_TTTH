#include"stdio.h"

void NhapSo(int &a);
int LaSNT(int n);

void main()
{
	int n;
	NhapSo(n);
	if (LaSNT(n))							//khong viet thi MAC DINH SO SANH VOI 1
	{
		printf("%d la SNT\n", n);
	}
	else
	{
		printf("%d khong phai la SNT\n");
	}
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

int LaSNT(int n)
{
	int uoc=0;
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			uoc++;
		}
	}
	// CACH 1
	/* if (uoc == 2)		// SNT ONLY chia het cho 1 va chinh no
	{
		return 1;
	}
	else
	{
		return 0;
	}
	*/
	// CACH 2	
	return(uoc == 2);
}



