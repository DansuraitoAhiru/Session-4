#include <stdio.h>
int main() {
	int a,b,c;
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	printf("Nhap so thu ba: ");
	scanf("%d", &c);
	if(a<c && c<b)
	   printf("So thu 3 nam trong khoang giua so thu 1 va 2");
	else if(a>c && c<b)
	   printf("So thu 3 nam trong khoang giua so thu 1 va 2");
	else
	   printf("So thu 3 ko nam trong khoang giua so thu 1 va 2");
	return 0;
}
