#include "Header.h"

int main()
{
	int lenh;
	int a,b;
	

	do
	{
		InMenu();
		scanf("%d", &lenh);
		HamThucThi(lenh, a, b);
	} while (lenh != 3);


	return 0;
}