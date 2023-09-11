#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter side 1 : ");
	scanf("%d",&a);
	
	printf("Enter side 2 : ");
	scanf("%d",&b);
	
	printf("Enter side 3 : ");
	scanf("%d",&c);

	if(a==b && a==c&&b==c){
		printf("EQUILATERAL");
	}
	else if(b!=a && b!=c && a!=c){
		printf("SCALENE");
	}
	else{
		printf("ISOCELES");
	}
}
