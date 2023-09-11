#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter number 1 : ");
	scanf("%d",&a);
	
	printf("Enter number 2 : ");
	scanf("%d",&b);
	
	printf("Enter number 3 : ");
	scanf("%d",&c);

	if(a==b&&a==c){
		printf("All 3 are same");
	}
	else{
		printf("Not equal");
	}
}
