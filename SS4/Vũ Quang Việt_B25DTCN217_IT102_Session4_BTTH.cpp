#include <stdio.h>
#include <math.h>
int main(){
	int a;
	printf("Nhap nam sinh: ");
	scanf("%d", &a);
	float b;
	printf("Nhap diem trung binh: ");
	scanf("%f", &b);
	
	int Tuoi;
	if(1900>=a || a>2025){
	   printf("Nam sinh ko hop le \n");
	   return 1;
	}
	   
	printf("\nThong tin sinh vien: \n");
	printf("Nam sinh: %d \n", a);
	
	Tuoi=2025-a;
	printf("Tuoi: %d \n", Tuoi);
	
	if(b<5.0)
	  printf("Hoc luc: Yeu");
	else if(b<6.5)
	  printf("Hoc luc: Trung binh");
	else if(b<8)
	  printf("Hoc luc: Kha");
	else if(b<=10)
	  printf("Hoc luc: Gioi");
	else
	  printf("Diem nhap ko hop le");
	return 0;
}

