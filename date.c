#include <stdio.h>
#include "date.h"

void inputNgay(Date *d)  //dung con tro de luu vao bien 
{
	printf("Nhap ngay thang nam:");
	scanf("%d%d%d",&d->ngay,&d->thang,&d->nam);
}

void outputNgay(Date d)
{
	printf("%d/%d/%d",d.ngay,d.thang,d.nam);
}
