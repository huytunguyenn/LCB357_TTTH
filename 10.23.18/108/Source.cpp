#include "stdio.h"

void main()
{
	int n;
	do{
		printf("Nhap so:");
		scanf("%d", &n);
		if (!((n >= 10) && (n >= 1000)))
			printf("Nhap lai di tml!\n");
	} while (!((n >= 10) && (n >= 1000)));
	int temp;
	int rem;
	int reverse = 0;
	temp = n;
	while (temp != 0)
	{
		rem = temp % 10;
		reverse = reverse * 10 + rem;
		temp /= 10;
	}
	if (reverse == n)
		printf("%d la so doi xung", n);
	else
		printf("%d khong doi xung", n);
}