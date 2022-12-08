#include "diem.h"

void nhapDiem(Diem *f){
	printf("\nNhap diem toan: ");scanf("%f",&f->toan);
	printf("\nNhap diem van: ");scanf("%f",&f->van);
	printf("\nNhap diem hoa: ");scanf("%f",&f->hoa);
	printf("\nNhap diem li: ");scanf("%f",&f->li);
	printf("\nNhap diem sinh: ");scanf("%f",&f->sinh);
	f->dtb = (f->toan+ f->van+ f->hoa+ f->li+ f->sinh)/5;
}

void inDiem(Diem f){
	printf("\tToan\t Van\t Hoa\t Li\t Sinh\t Dtb \n");
	printf("\t%.2f\t %.2f\t %.2f\t %.2f\t %.2f \t %.2f \n\n",f.toan,f.van,f.hoa,f.li,f.sinh,f.dtb);
//	printf("\nToan: %.2f",f.toan);
//	printf("\nVan: %.2f",f.van);
//	printf("\nHoa: %.2f",f.hoa);
//	printf("\nLi: %.2f",f.li);
//	printf("\nSinh: %.2f",f.sinh);	
//	printf("\nDiemtb: %.2f",f.dtb);	
}
