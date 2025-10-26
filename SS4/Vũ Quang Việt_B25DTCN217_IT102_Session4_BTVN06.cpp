#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	int soDien;
	long long tien=0;
	printf("Nhap so chi cu (kWh): ");
	scanf("%d", &a);
	printf("Nhap so chi moi (kWh): ");
	scanf("%d", &b);
	
	soDien=b-a;
	
	if(soDien<0){
	    printf("Chi so moi phai lon hon chi so cu \n");
	    return 1;
	}
	
	if(soDien<=50)
		tien=soDien * 10000;
	else if(soDien<100)
	    tien=50*10000 + (soDien-50)*15000;
	else if(soDien<150)
	    tien=50*100 + 50*15000 + (soDien-100)*20000;
	else if(soDien<200)
	    tien=50*10000 + 50*15000 + 50*20000 + (soDien-150)*25000;
	else
	    tien=50*10000 + 50*15000 + 50*20000 + (soDien-200)*30000;
	
	printf("So dien tieu thu: %d kWh \n");
	printf("Tien dien tieu thu: %lld VND \n");
	return 0;
}

