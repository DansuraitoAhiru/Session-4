#include <stdio.h>
int main(){
	int a,b,c;
	printf("Nhap gia tri canh a: ");
	scanf("%d", &a);
	printf("Nhap gia tri canh b: ");
	scanf("%d", &b);
	printf("Nhap gia tri canh c: ");
	scanf("%d", &c);
	
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
	  printf("La 3 canh tam giac");
	else
	  printf("Ko phai 3 canh tam giac");
	return 0;
}
