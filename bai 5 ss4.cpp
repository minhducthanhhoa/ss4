#include <stdio.h> 
int main(){
	int day;
	printf("Nhap vao ngay: ");
	scanf("%d", &day);
	int month;
	printf("Nhap vao thang: ");
	scanf("%d", &month);
	int year;
	printf("Nhap vao nam: ");
	scanf("%d", &year);
	if(year > 0){
		printf("Nam hop le\n", year);
	}else{
		printf("Nam khong hop le\n", year); 
	} 
	if(0 < month < 13){
		printf("Thang hop le\n", month);
	}else{
		printf("Thang khong hop le\n", month); 
	}
	if(0 < day < 32){
		printf("Ngay hop le\n", day); 
	}else{
		printf("Ngay khong hop le\n", day); 
	} 
}
