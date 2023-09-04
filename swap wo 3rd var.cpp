#include <stdio.h>
int main(){
	int a , b;
	printf("enter A  ");
	scanf("%d",&a);
	printf("enter B  ");
	scanf("%d",&b);
	
	printf("A = %d \n" ,a);
	printf("B = %d \n" ,b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("After swap \n A = %d \n B = %d",a,b);
}
