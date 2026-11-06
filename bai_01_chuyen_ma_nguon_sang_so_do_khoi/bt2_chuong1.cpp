#include <stdio.h>

int main(){
	int n, i , dem =0;
	scanf("%d",&n);
	
	if(n<2){
		printf("Khong phai so nguyen to"); 
	}
	else{
		for(i=1;i<=n;i++){
			if(n%i==0){
				dem++; 
			} 
		} 
		if(dem==2){
			printf("La so nguyen to"); 
		} 
		else{
			printf("Khong hai so nguyen to"); 
		} 
		return 0; 
	}
				
} 
