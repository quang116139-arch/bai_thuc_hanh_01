#include<stdio.h>

int main(){
	int a,b,i,max,bcnn;
	printf("Nhap a va b: ");
	scanf("%d%d", &a,&b);
	if(a>b){
		max = a; 
	} 
	else{
		max = b; 
	} 
	i = max;
	while(1){
		if(i%a==0 && i%b ==0){
			bcnn =i;
			break; 
		} 
		i++; 
	} 
	printf("BCNN = %d",bcnn);
	return 0; 
} 
