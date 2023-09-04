#include <stdio.h>
#include <string.h>
int main(){
 
 	int a;
	printf("enter year:  ");
	scanf("%d",&a);

	if(isdigit(a/4)){
		printf("yes");
	}
	else{	
	printf("no");
	}

}
