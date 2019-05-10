#include "stdio.h"
#define MAX 100
struct DATE
{
	int day, month, year;
};
struct HOCSINH
{
	char MaHS[5];
	char HoTen[50];
	DATE NgaySinh;
	float DiemLT, DiemTH, DTB;
};

int Nhap();
void NhapHocSinh(HOCSINH hocsinh[], int n);
void XuatMang(HOCSINH hocsinh[], int n);
void Swap(HOCSINH a, HOCSINH b);
void SapXepTheoNgaySinh(HOCSINH hocsinh[], int n);
bool NgayTruocNhoHonNgaySau(DATE d1, DATE d2);
void main()
{
	HOCSINH hocsinh[MAX];
	printf("Nhap so luong hoc sinh: ");
	int n = Nhap();
	NhapHocSinh(hocsinh,n);
	printf("\n~~~~~~~~~~ Thong tin hoc sinh da nhap ~~~~~~~~ \n");
	XuatMang(hocsinh, n);
	printf("\n~~~~~~~ Sap xep tang dan theo ngay sinh ~~~~~~ \n");
	SapXepTheoNgaySinh(hocsinh, n);
	XuatMang(hocsinh, n);
}
int Nhap()
{
	int m;
	scanf("%d", &m);
	return m ;
}
void NhapHocSinh(HOCSINH hocsinh[], int n)
{
	
	for (int i = 0; i < n; i++)
	{
		printf("\n---Nhap du lieu cho hoc sinh thu %d---\n",i+1);
		printf("Nhap Ma Hoc Sinh: ");
		flushall();
		gets(hocsinh[i].MaHS);
		printf("Nhap ho va ten: ");
		flushall();
		gets(hocsinh[i].HoTen);
		printf("Nhap ngay sinh: ");
		scanf("%d", &hocsinh[i].NgaySinh.day);
		printf("Nhap thang sinh: ");
		scanf("%d", &hocsinh[i].NgaySinh.month);
		printf("Nhap nam sinh: ");
		scanf("%d", &hocsinh[i].NgaySinh.year);
		printf("Nhap diem ly thuyet: ");
		float LT; scanf("%f", &LT);
		hocsinh[i].DiemLT = LT;
		printf("Nhap diem thuc hanh: ");
		float TH; scanf("%f", &TH);
		hocsinh[i].DiemTH = TH;
	}
}
void XuatMang(HOCSINH hocsinh[], int n)
{
	for (int i = 0; i < n; i++)
	{
		
		printf("\n---Thong tin hoc sinh thu %d---\n", i + 1);
		printf("Ma hoc sinh: %s\n", hocsinh[i].MaHS);
		printf("Ho va ten: %s\n", hocsinh[i].HoTen);
		printf("Sinh ngay: %d/%d/%d\n", hocsinh[i].NgaySinh.day, hocsinh[i].NgaySinh.month, hocsinh[i].NgaySinh.year);
		printf("Diem ly thuyet: %.2f\n", hocsinh[i].DiemLT);
		printf("Diem thuc hanh:%.2f\n", hocsinh[i].DiemTH);
		printf("Diem trung binh:%.2f\n", (hocsinh[i].DiemLT + hocsinh[i].DiemTH) / 2);
	}
}
void Swap(HOCSINH a, HOCSINH b)
{
	HOCSINH temp = a;
	a = b;
	b = temp;
}
void SapXepTheoNgaySinh(HOCSINH hocsinh[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if ( NgayTruocNhoHonNgaySau(hocsinh[i].NgaySinh, hocsinh[j].NgaySinh) )
			{
				Swap(hocsinh[i], hocsinh[j]);
			}

		}
}

bool NgayTruocNhoHonNgaySau(DATE d1, DATE d2)
{
	/*	return true neu d1<d2
	return flase neu d1=d2 hoac d1>d2
	*/
	if (d1.year > d2.year)
		return false;
	else
	{
		if (d1.year < d2.year)
			return true;
		else// nam bang nhau
		{
			if (d1.month > d2.month)
				return false;
			else 
				if (d1.month < d2.month)
					return true;
				else// thang+nam bang nhau
					if (d1.day > d2.day)
					return false;
					else
						if (d1.day < d2.day)
						return true;
						else
						return false;
		}
	}
}