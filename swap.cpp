#include <stdio.h>
int main(){
	int a , b;
	printf("enter A  ");
	scanf("%d",&a);
	printf("enter B  ");
	scanf("%d",&b);
	
	printf("A = %d \n" ,a);
	printf("B = %d \n" ,b);
	
	int c;
	c = a;
	a = b;
	b = c;
	
	printf("After swap \n A = %d \n B = %d",a,b);
}
