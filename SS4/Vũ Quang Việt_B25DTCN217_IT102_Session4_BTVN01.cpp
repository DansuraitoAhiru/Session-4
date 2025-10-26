#include <stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen bat ki: ");
	scanf("%d", &n);
	if(n < 0){
		printf("Day la so am \n");
	} else {
		printf("Day la so duong \n");
	}
	return 0;
}
