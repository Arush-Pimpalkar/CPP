#include<stdio.h>
int main(){

	int a,b,c,d,e;

	printf("enter math  ");
	scanf("%d",&a);
	
	printf("enter sci  ");
	scanf("%d",&b);

	printf("enter sst  ");
	scanf("%d",&c);
	
	printf("enter eng  ");
	scanf("%d",&d);
	
	printf("enter tamil  ");
	scanf("%d",&e);
	
	int sum = (a + b + c + d + e)/5;
	
	printf("%%age is %d" , sum);
	
}
