#include "stdio.h"
#include "iostream"
#define SIZE 200
struct DATE{
	char ngay;
	char thang;
	int nam;
};
struct HOCVIEN{
	char MSHV[5];
	char HoTen[20];
	DATE NgaySinh;
	float Dtb;
};
int Nhap();
void NhapThongTin1(HOCVIEN hocvien);
void XuatThongTin1(HOCVIEN hocvien);
void NhapDanhSach(HOCVIEN hocvien[], int &n);
void XuatDanhSach(HOCVIEN hocvien[], int n);
int DemThang10(HOCVIEN hocvien[], int n);
void DiemMax(HOCVIEN hocvien[], int n);
void SinhMax(HOCVIEN hocvien[], int n);
void main()
{
	HOCVIEN hocvien[SIZE];
	printf("So luong hoc vien ban muon nhap!");
	int n = Nhap();
	NhapDanhSach(hocvien, n);
	XuatDanhSach(hocvien, n);
	printf("\nSo hoc vien sinh vao thang 10 la: %d\n", DemThang10(hocvien, n));
	printf("\nCac sinh vien co diem trung binh cao nhat la:\n");
	DiemMax(hocvien, n);
	printf("\nCac sinh vien tre nhat la:\n");
	SinhMax(hocvien, n);
}

int Nhap()
{
	int n;
	do{
		system("cls");
		printf("Vui long nhap so nguyen duong (1-200): ");
		scanf("%d", &n);
		if (!(n > 0 && n <= SIZE))
		{
			printf("Khong hop le. Vui long nhap lai!\n"); system("pause");
		}
	} while (!(n>0&&n<=SIZE));
	return n;
}
void NhapDanhSach(HOCVIEN hocvien[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\n----Nhap thong tin cua hoc vien thu %d----\n", i + 1);
		printf("Nhap ma so hoc vien: ");
		flushall();
		gets(hocvien[i].MSHV);
		printf("Nhap ho va ten: ");
		flushall();
		gets(hocvien[i].HoTen);
		printf("Nhap ngay sinh: ");
		scanf("%d", &hocvien[i].NgaySinh.ngay);
		printf("Nhap thang sinh: ");
		scanf("%d", &hocvien[i].NgaySinh.thang);
		printf("Nhap nam sinh: ");
		scanf("%d", &hocvien[i].NgaySinh.nam);
		printf("Nhap diem trung binh: ");
		float dtb; scanf("%f", &dtb);
		hocvien[i].Dtb = dtb;
	}
}
void XuatDanhSach(HOCVIEN hocvien[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\n-----Thong tin cua hoc vien thu %d-----\n", i + 1);
		printf("Ma so hoc vien:");
		puts(hocvien[i].MSHV);
		printf("Ho va ten: ");
		puts(hocvien[i].HoTen);
		printf("Sinh vao: %d/%d/%d\n", hocvien[i].NgaySinh.ngay, hocvien[i].NgaySinh.thang, hocvien[i].NgaySinh.nam);
		printf("Diem trung binh: %.2f\n", hocvien[i].Dtb);
	}
}
void NhapThongTin1(HOCVIEN hocvien)
{
	printf("Nhap ma so hoc vien: ");
	flushall();
	gets(hocvien.MSHV);
	printf("Nhap ho va ten: ");
	flushall();
	gets(hocvien.HoTen);
	printf("Nhap ngay sinh: ");
	scanf("%c", &hocvien.NgaySinh.ngay);
	printf("Nhap thang sinh: ");
	scanf("%c", &hocvien.NgaySinh.thang);
	printf("Nhap nam sinh: ");
	scanf("%d", &hocvien.NgaySinh.nam);
	printf("Nhap diem trung binh: ");
	float dtb; scanf("%f", &dtb);
	hocvien.Dtb = dtb;
}
void XuatThongTin1(HOCVIEN hocvien)
{
	printf("Ma so hoc vien:");
	puts(hocvien.MSHV);
	printf("Ho va ten: "); 
	puts(hocvien.HoTen);
	printf("Sinh vao: %c/%c/%d\n", hocvien.NgaySinh.ngay, hocvien.NgaySinh.thang, hocvien.NgaySinh.nam);
	printf("Diem trung binh: %f", hocvien.Dtb);
}
int DemThang10(HOCVIEN hocvien[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (hocvien[i].NgaySinh.thang == 10)
			dem++;
	}
	return dem;
}
void DiemMax(HOCVIEN hocvien[], int n)
{
	float max = hocvien[0].Dtb;
	for (int i = 0; i < n; i++)
	{
		if (hocvien[i].Dtb >= max)
			max = hocvien[i].Dtb;	
	}
	for (int i = 0; i < n; i++)
	{
		if (hocvien[i].Dtb == max)
			puts(hocvien[i].HoTen);
	}
}
void SinhMax(HOCVIEN hocvien[], int n)
{
	int nammax = hocvien[0].NgaySinh.nam;
	for (int i = 0; i < n; i++)
	{
		if (hocvien[i].NgaySinh.nam >= nammax)
			nammax = hocvien[i].NgaySinh.nam;
	}
	for (int i = 0; i < n; i++)
	{
		if (hocvien[i].NgaySinh.nam == nammax)
			puts(hocvien[i].HoTen);
	}
}

