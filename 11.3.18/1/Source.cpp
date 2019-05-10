#include "stdio.h"
#define MAX 100
void Lower(char s[])
{
	int i=0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 'A') && (s[i] <= 'Z'))
		{
			s[i] += 'a'-'A';
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

			s[i] -= 'a'-'A';
		}
	}
}
void ChuDauTien(char s[])
{
	int i = 0;
	while (s[i] != '\0')
	{
		while ( (s[i] == ' ') && (s[i] != '\0')) // vuot qua khoang trang
		{
			i ++ ;
		}
		if ((s[i]>='a')&&(s[i]<='z')&&(s[i]!= '\0'))                                                                                                                                                                                                                                                                                
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
void main()
{
	char s[MAX];
	while (getchar() != '\n');
	printf("Nhap:");
	flushall();
	fgets(s, sizeof(s), stdin);
	ChuDauTien(s);
	puts(s);	
}