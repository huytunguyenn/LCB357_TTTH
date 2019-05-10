#include "stdio.h"
#include "conio.h"

/* BCC doc
void main()
{
for (int n = 2; n <= 9; n++)
{
printf("Bang cuu chuong cua %d\n\n", n);
for (int i = 1; i <= 10; i++)
{
printf("%3d x %3d = %3d\n", n, i, n*i);
}
printf("\n");
}
}*/


/* BCC doc
void main()
{
	int n = 2;
	while (n <= 9)
	{
		int i = 1;
		printf("Bang cuu chuong cua %d\n\n", n);
		while (i <= 10)
		{
			printf("%3d x %3d = %3d\n", n, i, n*i);
			i++;
		}
		printf("\n");
		n++;
	}
}*/



/* BCC ngang y tuong loi
	for (int n = 2; n <= 9; n++)
	{
		printf("Bang cuu chuong %d\t", n);
	}
	for (int n = 2; n <= 9; n++)
	{
		printf("%d x %d = %d\t\t",n,1,n*1 );
	}
	for (int n = 2; n <= 9; n++)
	{
		printf("%d x %d = %d\t\t", n, 2, n * 2);
	}
	for (int n = 2; n <= 9; n++)
	{
		printf("%d x %d = %d\t\t", n, 3, n * 3);
	}
	for (int n = 2; n <= 9; n++)
	{
		printf("%d x %d = %d\t\t", n, 4, n * 4);
	}
	for (int n = 2; n <= 9; n++)
	{
		printf("%d x %d = %d\t\t", n, 5, n * 5);
	}
	for (int n = 2; n <= 9; n++)
	{
		printf("%d x %d = %d\t\t", n, 6, n * 6);
	}
	for (int n = 2; n <= 9; n++)
	{
		printf("%d x %d = %d\t\t", n, 7, n * 7);
	}
	for (int n = 2; n <= 9; n++)
	{
		printf("%d x %d = %d\t\t", n, 8, n * 8);	
	}
	for (int n = 2; n <= 9; n++)
	{
		printf("%d x %d = %d\t\t", n, 9, n * 9);
	}
	
*/



void main()
{
	for (int n = 2; n <= 9; n++)
	{
		printf("Bang cuu chuong %d\t", n);
	}
	for (int i = 1; i <= 10; i++)
	{
		for (int n = 2; n <= 9; n++)
		{
			printf("%d x %d = %d\t\t", n, i, n * i);
		}
	}
	
}