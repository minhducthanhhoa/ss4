#include <stdio.h> 
int main(){
	int old_electric_index,new_electric_index,price; 
	printf("Nhap vao chi so cong to dien cu: ");
	scanf("%d", &old_electric_index);
	printf("Nhap vao chi so cong to dien moi: ");
	scanf("%d", &new_electric_index); 
	int electric_energy_meter = new_electric_index - old_electric_index;
	if (0 <= electric_energy_meter < 50){
		price = 10000; 
	} else if (50 <= electric_energy_meter < 100){
		price = 15000; 
	} else if (100 <= electric_energy_meter < 150){
		price = 20000; 
	} else if (150 <= electric_energy_meter < 200){
		price = 25000; 
	} else if (200 <= electric_energy_meter){
		price = 30000; 
	}
	int money = electric_energy_meter * price;
	printf("Gia dien la: %d VND \n",money); 
}
 
