#include "stdio.h"



void main()
{
	int n;
	do{
		printf("Nhap so:");
		scanf("%d", &n);
		if (!(n > 0))
			printf("Buon ngu ha ma?\n");
	} while (!(n > 0));
	int so;
	int chan = 0;
	int le = 0;
	while (n > 0) // TACH SO CACH 2
	{
		so = n % 10;
		n = n / 10;
		if (so % 2 == 0)
		{
			chan++;
		}
		else 
		{
			le++;
		}
	}
	printf("Co %d so chan, %d so le.\n", chan, le);

}