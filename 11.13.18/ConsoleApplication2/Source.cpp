#include "stdio.h"

void main()
{
	int a = 10, *pa;
	pa = &a;
	printf("Gia tri cua a la (su dung 'a'): %d\n", a);
	printf("Gia tri cua a la (su dung '*pa'): %d\n", *pa);
	printf("Dia chi bien a (su dung '&a'): %x\n", &a);
	printf("Dia chi bien a (su dung 'pa'): %x\n", pa);
	printf("Dia chi bien a (su dung '&(*pa)'): %x\n", &(*pa));
	printf("Dia chi bien a (su dung '*(&pa)'): %x\n", *(&pa));
	*pa = 5;
	printf("Gia tri cua a la(su dung 'a'):%d\n", a);
	printf("Gia tri cua a la (su dung '*pa'): %d\n", *pa);
	printf("Dia chi cua cua con tro pa: %x\n", &pa);
}