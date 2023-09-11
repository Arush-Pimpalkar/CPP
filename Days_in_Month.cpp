#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter Month: ");
	scanf("%d",&a);
	
	printf("Enter Year: ");
	scanf("%d",&b);
	
	if(a == 2 && (b%4 == 0 || b%400 == 0)){
		printf("days = 29");
	}
	else if(a == 2 && (b%4 != 0 || b%400 != 0)){
		printf("days = 28");
	}

	else if(a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a== 10 || a == 12){
		printf("days = 31");
	}
	
	else if(a == 4 || a == 6 || a == 9 || a == 11 ){
		printf("days = 30");
	}
}
