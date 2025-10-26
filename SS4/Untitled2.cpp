#include <stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen bat ki: ");
	scanf("%d", &n);
	if(n % 2 == 0) {
		printf("Day la so chan");
	} else {
		printf("Day la so le");
	}
	return 0;
}
