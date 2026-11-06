#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SinhVien{
	char hoten[50];
	char ma[20];
	float diem1;
	float diem2;
	float diem3; 
}; 

int main(){
	int n;
	struct SinhVien *sv;
	printf("Nhap so sinh vien: ");
	scanf("%d",&n);
	getchar();
	
	sv = (struct SinhVien*)malloc(n*sizeof(struct SinhVien));
	for(int i =0; i<n; i++){
		printf("\nNhap sinh vien thu %d:\n",i+1);
		printf("Ho ten: ");
		fgets((sv+i)->hoten,50,stdin);
		(sv+i)->hoten[strcspn((sv+i)->hoten,"\n")]='\0';
		
		printf("Ma sinh vien: ");
		fgets((sv+i)->ma,20,stdin);
		(sv+i)->ma[strcspn((sv+i)->ma,"\n")]='\0';
		
		printf("Diem 1: ");
		scanf("%f", &(sv+i)->diem1);
		
		printf("Diem 2: ");
		scanf("%f",&(sv+i)->diem2);
		
		printf("Diem 3: ");
		scanf("%f",&(sv+i)->diem3);
		getchar(); 
	} 
	printf("\nDANH SACH SINH VIEN\n");
	for(int i =0;i<n;i++){
		printf("\nHo ten: %s\n", (sv+i)->hoten);
		printf("Ma sinh vien:%s\n",(sv+i)->ma);
		printf("Diem 1:%.2f\n",(sv+1)->diem1);
		printf("Diem 2:%.2f\n",(sv+1)->diem2);
		printf("Diem 3:%.2f\n",(sv+1)->diem3);
	} 
	free(sv);
	return 0; 
} 
