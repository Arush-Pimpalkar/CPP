#include <stdio.h>
int main(){
	int sc,rate,time;
	
	printf("enter Surcharge  ");
	scanf("%d",&sc);
	printf("enter Rate  ");
	scanf("%d",&rate);
	printf("enter Time  ");
	scanf("%d",&time);
	
	int tc = sc + (rate*time);
	
	printf("Total charge is: %d",tc);
}
