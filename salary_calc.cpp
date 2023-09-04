//ba + 45% + 16%

#include <stdio.h>
int main(){
	int a;
	printf("Enter Basic Salary: ");
	scanf("%d",a);
	
	int ts = a + (0.45*a) + (0.16*a);
	printf("Salary = %d",ts);
	
	
}
