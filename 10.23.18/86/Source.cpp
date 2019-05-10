#include "stdio.h"

void main()
{
	for (int i = 0; i <= 126; i++)
	{
		printf("%5d : %5c\n", i, i);
	}
}