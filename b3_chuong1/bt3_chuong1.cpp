#include<stdio.h>

int main(){
	int a[100],n,max;
	scanf("%d", &n);
	for(int i =0;i<n;i++){
		printf("Nhap a[%d]: ",i);
		scanf("%d", &a[i]); 
	} 
	max = a[0];
	for(int i =0;i<n;i++) {
		if(a[i]>max){
			max = a[i]; 
		} 
	}
	printf("So lon nhat la: %d", max);
	return 0; 
} 
