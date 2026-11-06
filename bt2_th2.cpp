#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, m;
	float *a;
	
	printf("Nhap so hang: ");
	scanf("%d",&m);
	
	printf("Nhap so cot: ");
	scanf("%d", &n);
	
	a= (float*)malloc(m*n*sizeof(float));
	printf("Nhap mang:\n");
	for(int i =0; i<m;i++){
		for(int j =0;j<n;j++){
			printf(":a[%d][%d] = ",i ,j );
			scanf("%f", a+i*n+j); 
		} 
	} 
	printf("\nMang vua nhap:\n");
	for(int i =0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%.2f\t",*(a+i*n+j)); 
		} 
		printf("\n");
	} 
	free(a);
	return 0; 
} 
