#include<stdio.h>
int main(){

	int a,b,sum;

	printf("enter A  ");
	scanf("%d",&a);
	
	printf("enter b  ");
	scanf("%d",&b);


	sum = a+b;
	printf("sum = %d \n", sum );
	
	int diff = a-b;
	printf("diff = %d \n",diff);
	
	int mult = a * b;
	printf("multiplication = %d \n",mult);
	
	int divi = a/b;
	printf("division = %d",divi);
	
}
