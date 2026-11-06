#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	float *a;
	
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	a=(float*)malloc(n*sizeof(float));
	
	printf("Nhap mang:\n");
	for(int i =0; i<n;i++){
		printf("a[%d] = ",i);
		scanf("%f",a+i);
	} 
	printf("Mang vua nhap la:\n");
	for(int i=0;i<n;i++){
		printf("%.2f ",*(a+i)); 
	} 
	free(a);
	return 0; 
} 
