#include <stdio.h>
int main(){
	int a,b,c;
	printf("Nhap do dai 3 canh cua tam giac: ");
	scanf("%d%d%d", &a,&b,&c);
	if (a + b > c) {
        printf("Day la mot tam giac.");

        if (a == b && b == c) {
            printf("Tam giac deu.");
        } else if (a == b || b == c || c == a) {
            printf("Tam giac can.");
        } else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
            printf("Tam giac vuong.");
        } else {
            printf("Tam giac thuong.");
        }
    } else {
        printf("Day khong phai la mot tam giac.");
    }
}
