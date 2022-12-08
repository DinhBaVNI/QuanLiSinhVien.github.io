#include "diem.h"

void nhapDiem(Diem *f){
	printf("Nhap diem toan: ");
	scanf("%f",&f->toan);
	printf("\nNhap diem van: ");scanf("%f",&f->van);
	printf("\nNhap diem hoa: ");scanf("%f",&f->hoa);
	printf("\nNhap diem li: ");scanf("%f",&f->li);
	printf("\nNhap diem sinh: ");scanf("%f",&f->sinh);
	f->dtb = (f->toan+ f->van+ f->hoa+ f->li+ f->sinh)/5;
}

void inDiem(Diem f){
	printf("\n Toan: %.2f",f.toan);
	printf("\n Van: %.2f",f.van);
	printf("\n Hoa: %.2f",f.hoa);
	printf("\n Sinh: %.2f",f.sinh);	
	printf("\n Diemtb: %.2f",f.dtb);	
}
