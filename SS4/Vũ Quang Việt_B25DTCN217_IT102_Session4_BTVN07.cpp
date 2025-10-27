#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap so nam bat ki: ");
	scanf("%d", &n);
	if((n%4==0 && n%100!=0) || (n%400==0))
		printf("Nam %d la nam nhuan", n);
	else
	    printf("Nam %d la nam thuong", n);
	return 0;
}

