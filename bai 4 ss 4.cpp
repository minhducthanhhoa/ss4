#include <stdio.h> 
int main(){
	int year;
	printf("Nhap vao nam: ");
	scanf("%d",&year);
	int month;
	printf("Nhap vao thang: ");
	scanf("%d",&month);
	int number_of_day;
	if(month == 2){
		//Kiem tra nam nhuan 
		if(year % 4 == 0){
			number_of_day = 29; 
		}else{
			number_of_day = 28; 
		} 
	}else if (month == 4 || month == 6 || month == 9 || month == 11){
			number_of_day = 30;
	}else{
			number_of_day = 31;
	}
	printf("So ngay cua thang %d nam %d la %d\n",month,year,number_of_day);
}

