#include "stdio.h"
#include "iostream"
#define MAX 100



void InMenu()
{
	system("cls");
	printf("1.Nhap chuoi.\n2.Xuat chuoi.\n3.Ma hoa.\n4.Goi ma(1-10).\n5.Viet thuong.\n6.Viet hoa.\n7.Tu dong hoa, thuong.\n8.Thoat.\nLua chon cua ban:");
}

void Nhap(char s[])
{
	printf("Nhap:");
	flushall();
	fgets(s, MAX, stdin);
}
void Xuat(char s[])
{
	printf("Noi dung vua nhap:");
	puts(s);
	system("pause");
}
void Lower(char s[])
{
	int i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 'A') && (s[i] <= 'Z'))
		{
			s[i] += 'a' - 'A';
		}
		i++;
	}
}
void Upper(char s[])
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
		{

			s[i] -= 'a' - 'A';
		}
	}
}
void ChuDauTien(char s[])
{
	int i = 0;
	while (s[i] != '\0')
	{
		while ((s[i] == ' ') && (s[i] != '\0')) // vuot qua khoang trang
		{
			i++;
		}
		if ((s[i] >= 'a') && (s[i] <= 'z') && (s[i] != '\0'))
		{
			s[i] -= 32;	//de i++ trong nay sai voi"S S"
		}
		i++;
		while ((s[i] != '\0') && (s[i] != ' '))
		{
			if ((s[i] >= 'A') && (s[i] <= 'Z'))
			{
				s[i] += 32;
			}
			i++;
		}
	}
}
void GoiMa(char s[])
{
	int k, i = 0;
	printf("Nhap key:");
	scanf("%d", &k);
	while (s[i] != '\0')
	{
		s[i] = (26+ s[i] - k)%26;
		i++;
	}
}
void MaHoa(char s[])
{
	int k, i = 0;
	do{
		printf("Nhap key:");
		scanf("%d", &k);	
	} while (!((k > 0) && (k <= 10)));
	while (s[i] != '\0')
	{
		if (s[i] != '\0')
		s[i] = (s[i] - k) % 26;
		i++;
	}
}
void HamThucThi(int lenh,char s[])
{
	switch (lenh)
	{
	case 1: system("cls"); Nhap(s); break;
	case 2: system("cls"); Xuat(s); break;
	case 3: system("cls"); MaHoa(s); break;
	case 4: system("cls"); GoiMa(s); break;
	case 5: system("cls"); Lower(s); break;
	case 6: system("cls"); Upper(s); break;
	case 7: system("cls"); ChuDauTien(s); break;
	}
}


void main()
{
	char s[MAX];
	int lenh;
	do{
		InMenu();
		scanf("%d", &lenh);
		HamThucThi(lenh, s);
	} while (lenh != 8);

}