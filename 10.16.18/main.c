#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,tong,hieu,tich;
    float thuong;
    printf("Nhap so thu nhat:");
    scanf("%d",&a);
    printf("Nhap so thu hai:");
    scanf("%d",&b);
    tong = a+b;
    hieu = a-b;
    tich = a*b;
    thuong = (float)a/b;

    printf("%d-%d=%d\n",a,b,hieu);
    printf("%d*%d=%d\n",a,b,tich);
    printf("%d/%d=%.2f",a,b,thuong);

}
