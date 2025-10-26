#include <stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen bat ki: ");
	scanf("%d", &n);
	if(n % 3 == 0){
		printf("So nay chia het cho 3 \n");
	} else {
	if(n % 5 ==0){
		printf("So nay chia het cho 5 \n");
	} else {
	if(n % 15 ==0){
		printf("So nay chia het cho 3 va 5 \n");
	} else {
		printf("So nay ko chia het cho 3 va 5 \n");
	}}}
	return 0;
}
	
