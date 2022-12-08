#include <stdio.h>
#include <stdlib.h>
#include "sinhvien.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int chon,n;
	Sinh_vien ds[100];
	do {
		system("cls");
		printf("\n----=======MENU=======----");		
		printf("\n =====1. Nhap thong tin sinh vien =====");
		printf("\n =====2. Hien thi thong tin sinh vien =====");
		printf("\n =====3. Tim thong tin sinh vien bang ma sinh vien =====");
		printf("\n =====4. Sap xep theo diem giam dan =====");
		printf("\n =====5. Ghi thong tin sinh vien vao tep =====");
		printf("\n =====6. Doc thong tin sinh vien trong tep =====");
		printf("\n =====0. Thoat=====");
		printf("\n-------=============-------");
		printf("\n Ban hay chon mot cong viec: ");scanf("%d",&chon);
		switch (chon)
		{
			case 1: 
				system("cls");
				printf("\n1. Nhap thong tin sinh vien\n");
				nhapdssv(ds,&n);
				getch();
				break;
			case 2: 
				system("cls");
				printf("\n2. Hien thi thong tin sinh vien\n");
				hienthidssv(ds,n);
				getch();
				break;
			case 3: 
				system("cls");
				printf("\n3. Tim thong tin sinh vien bang ma sinh vien\n");
				timsvbangMa(ds,n);
				getch();
				break;
			case 4: 
				system("cls");
				printf("\n4. Sap xep theo diem\n");
				sapxepdiem(ds,n);
				getch();
				break;		
			case 5: 
				system("cls");
				printf("\n5. Ghi danh sach sinh vien vao tep\n");
				ghidssv(ds,n);
				getch();
				break;	
			case 6: 
				system("cls");
				printf("\n6. Doc danh sach sinh vien tu tep\n");
				docdssv(ds,&n);
				getch();
				break;	
		}
	} while (chon!=0);
	
	
	return 0;
}
