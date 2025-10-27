#include <stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen bat ki: ");
	scanf("%d", &n);
	if(n < 0){
		printf("%d la so am \n", n);
	} else if(n==0){
	    printf("%d ko phai la so am cung ko la so duong", n);
	}
	else{
		printf("%d la so duong \n", n);
	}
	return 0;
}

