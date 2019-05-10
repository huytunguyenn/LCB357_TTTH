#include <stdio.h>
#include <conio.h>

void main()
{
	int luong, vao, ra;
	printf("Nhap gio vao:\n");
	scanf("%d", &vao);
	printf("Nhap gio ra:\n");
	scanf("%d", &ra);
	if (vao <12 && ra < 12)
	{
		luong = (ra-vao) * 6000;
	}
	else if (vao <12 && ra>=12 )
	{
		luong = (12 - vao) * 6000 + (ra - 12) * 7500;
	}
	else if (vao >12 && ra >12)
	{
		luong = (ra - vao) * 7500;
	}
	printf("Tien luong la:%d", luong);
	_getch();
}