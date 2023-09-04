#include <stdio.h>
int main(){
	int a,b,c;
	
	printf("enter A:  ");
	scanf("%d",&a);
	
	printf("enter B:  ");
	scanf("%d",&b);

	printf("enter C:  ");
	scanf("%d",&c);
	
	
	if ( a > b && a > c){
		printf("A");
	}
	if ( c > b && c > a){
		printf("B");
	}
	if ( b > c && b > a){
		printf("C");
	}
	
}
