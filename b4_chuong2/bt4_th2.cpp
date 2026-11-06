#include<stdio.h>
#include<stdlib.h>

struct SinhVien{
	char hoten[50];
	char ma[20];
	float diem1;
	float diem2;
	float diem3; 
}; 
struct Node{
	struct SinhVien data;
	struct Node*next; 
}; 
int main(){
	struct Node*head =NULL;
	return 0; 
} 
