#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter percentage:  ");
	scanf("%d",&a);
	
	

	if(a>=90 && a<=100){
		printf("Grade A");
	}
	else if(a>=80 && a<=89){
		printf("Grade B");
	}
	else if(a>=70 && a<=79){
		printf("Grade C");
	}
	
	else if(a>=60 && a<=69){
		printf("Grade D");
	}
	
	else if(a>=50 && a<=59){
		printf("Grade E");
	}
	
	else if(a>=40 && a<=49){
		printf("Grade F");
	}
	
	else{
	printf("Grade F");
	}
}
