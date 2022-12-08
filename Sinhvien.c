#include <stdio.h>
#include "sinhvien.h"

void nhapsv(Sinh_vien *h)
{
	fflush(stdin);
	printf("\nNhap ma sinh vien:");gets(h->masv);
	printf("\n Nhap ho ten:");gets(h->hoten);
	nhapDiem(&h->mh);
	inputNgay(&h->ns);
	printf("\nNhap gioi tinh (0-nu,1-nam):");scanf("%d",&h->gt);
	fflush(stdin);
	printf("\nNhap que quan:");gets(h->quequan);
	printf("\nNhap lop:");gets(h->lop);
}

void hienthisv(Sinh_vien h)
{
	printf("\nMa sinh vien: %s",h.masv);
	printf("\nHo ten: %s",h.hoten);
	printf("\nNgay sinh: ");outputNgay(h.ns);	
	printf("\nGioi tinh: %s",(h.gt!=0?"Nam":"Nu"));
	printf("\nQue quan: %s",h.quequan);
	printf("\nLop: %s",h.lop);
	printf("\nDiem: ");inDiem(h.mh);
}

void nhapdssv(Sinh_vien *a, int *n)
{
	int i;
	printf("So luong sinh vien muon nhap:");scanf("%d",n);
	for (i=0;i<*n;i++){
		printf("\n Sinh vien vien thu %d:",i+1);
		nhapsv(&a[i]);
	}
	printf("\nThanh cong nhap vao du lieu ...");
}

void hienthidssv(Sinh_vien *a,int n)
{
	int i;
	printf("\nCac sinh vien da nhap:");
	for (i=0;i<n;i++){
		printf("\nSinh vien thu %d:\n",i+1);
		hienthisv(a[i]);
	}
}

void timsvbangMa(Sinh_vien *a,int n){
	char findText[15];
	int i;
	fflush(stdin);
	printf("\nNhap ma sinh vien muon tim:");gets(findText);
	for (i=0;i<n;i++)
		if (strcmp(a[i].masv,findText)==0){
	 			hienthisv(a[i]);
	 		}
}

 
void sapxepdiem(Sinh_vien a[],int n){
	int i, j;
	for (i=0; i<n-1; i++){
		for(j=n-1; j<n; j--){
			if(a[j].mh.dtb> a[j-1].mh.dtb){
				Sinh_vien sx = a[j];
				a[j] = a[j-1];
				a[j-1] = sx;			
			}
		}
	}
	printf("%.2f" ,a[i]);
}

//void indiemsx(Sinh_vien *a, int n){
//	int i;
//	for(i=0; i< n; i++){
//				
//	}
//
//}

void ghidssv(Sinh_vien *a,int n){
	char tentep[30]; int i;
	FILE *fp;
	fflush(stdin);
	printf("\nNhap ten tep:");gets(tentep);
	if ((fp=fopen(tentep,"w"))==NULL){
		printf("\nTep loi roi!");
//		exit(1);
	}
	for (i=0;i<n;i++){				
		fprintf(fp,"%s\n",a[i].masv);
		fprintf(fp,"%s\n",a[i].hoten);
		fprintf(fp,"%d %d %d\n",a[i].ns.ngay,a[i].ns.thang,a[i].ns.nam);
		fprintf(fp,"%d\n",a[i].gt);
		fprintf(fp,"%s\n",a[i].quequan);
		fprintf(fp,"%s\n",a[i].lop);
	}
	fclose(fp);
	printf("\nGhi du lieu thanh cong...");
}

void docdssv(Sinh_vien *a,int *n){
	char tentep[30]; 
	Sinh_vien temp;
	FILE *fp;
	fflush(stdin);
	printf("\nNhap ten tep muon doc:");gets(tentep);
	if ((fp=fopen(tentep,"r"))==NULL){
		printf("\nTep loi roi!");
//		exit(1);
	}
	*n=0;
	while (fgets(temp.masv,10,fp) != NULL){   	
		fgets(temp.hoten,50,fp);
		fscanf(fp,"%d%d%d",&temp.ns.ngay,&temp.ns.thang,&temp.ns.nam);
		fscanf(fp,"%d",&temp.gt);
		fgetc(fp);
		fgets(temp.quequan,30,fp);
		fgets(temp.lop,10,fp);
		a[*n]=temp;
		hienthisv(a[*n]);
		*n++;
	}
	fclose(fp);;
	printf("\nBat dau doc du lieu...");
}

