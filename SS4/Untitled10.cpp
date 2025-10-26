#include <stdio.h>
int main(){
	int a,b,c;
	printf("a = ");
	scanf("%d", &a);
	printf("b= ");
	scanf("%d", &b);
	printf("c= ");
	scanf("%d", &c);
	
	if(a>=b && b>=c)
	   printf("Thu tu tang dan: %d %d %d", c, b, a);
	else if(a<=b && b<=c)
	   printf("Thu tu tang dan: %d %d %d", a, b, c);
	else if(a<=b && b>=c && c>=a )
	   printf("Thu tu tang dan: %d %d %d", a, c, b);
	else if(a<=b && b>=c && c<=a )
	   printf("Thu tu tang dan: %d %d %d", c, a, b);
	else if(a>=c && c>=b)
	   printf("Thu tu tang dan: %d %d %d", b, c, a);
	else
	   printf("Thu tu tang dan: %d %d %d", b, a, c);
	return 0;
}
