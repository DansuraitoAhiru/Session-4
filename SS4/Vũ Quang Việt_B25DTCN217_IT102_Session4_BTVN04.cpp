#include <stdio.h>
int main(){
	int n;
	printf("Nhap thang bat ki (1-12)): ");
	scanf("%d", &n);
	if(n == 1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12){
		printf("Thang co 31 ngay");
	} else {
	if(n==4 || n==6 || n==9 || n==11){
		printf("Thang co 30 ngay");
	} else {
	if(n==2){
		printf("Thang co 28 hoac 29 ngay (tuy nam nhuan)");
	} else {
		printf("Thang ko hop le");
	}}}
	return 0;
}
