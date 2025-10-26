#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap so nam bat ki: ");
	scanf("%d", &n);
	if((n%4==0 && n%100!=0) || (n%400==0))
		printf("Nam nay la nam nhuan");
	else
	    printf("Nam nay la nam thuong");
	return 0;
}
