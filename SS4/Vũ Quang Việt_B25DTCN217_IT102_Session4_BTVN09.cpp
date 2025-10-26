#include <stdio.h>
int main(){
	int a,b,c;
	int d;
	printf("Ngay = ");
	scanf("%d", &a);
	printf("Thang = ");
	scanf("%d", &b);
	printf("Nam = ");
	scanf("%d", &c);
	
	if(b<1 || b>12)
	  printf("Thang ko hop le \n");
	  
	switch(b){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			d=31;
		break;
		
		case 4: case 6: case 9: case 11:
			d=30;
		break;
		
		case 2:
			if((c%4==0 && c%100!=0) || c%400==0)
			 d=29;
			else
			 d=28;
		break;
	}
		
	if(a>=1 && a<=d)
	  printf("Ngay thang nam hop le \n");
	else
	  printf("Ngay thang nam ko hop le \n");
	return 0;
}
