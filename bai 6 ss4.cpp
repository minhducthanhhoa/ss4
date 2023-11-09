#include <stdio.h>
int main(){
	int a,b,c;
	printf("Nhap vao gia tri cua a: ");
	scanf("%d", &a);
	printf("Nhap vao gia tri cua b: ");
	scanf("%d", &b);
	printf("Nhap vao gia tri cua c: ");
	scanf("%d", &c);
	int max = a;
	if (b > max){
		max = b; 
	}
	if (c > max){
		max = c; 
	}
	int min = a;
	if (b < min){
		min = b; 
	}
	if (c < min){
		min = c; 
	}
	int rest;
	printf("Thu tu co gia tri giam dan la: %d %d %d \n",max,rest,min);  
		
	
}
