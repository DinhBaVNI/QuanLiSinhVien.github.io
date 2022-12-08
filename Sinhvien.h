#include "date.h"
#include "diem.h"

typedef struct  
{
	char masv[10];
	char hoten[50];
	Diem mh;
	Date ns;
	int gt; //0-nu,1-nam
	char quequan[30];
	char lop[10];
} Sinh_vien;

void nhapsv(Sinh_vien *h);

void hienthisv(Sinh_vien h);

void nhapdssv(Sinh_vien *a, int *n);

void indssv(Sinh_vien *a,int n);

void timsvbangMa(Sinh_vien *a,int n);
 
void sapxepdiem(Sinh_vien *a,int n);

//void inradiemsx(Sinh_vien *a, int n);

void ghidssv(Sinh_vien *a,int n);

void docdssv(Sinh_vien *a,int *n);

