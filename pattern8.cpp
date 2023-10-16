#include <stdio.h>
int main(){
	for (int n=5;n>0;n--){	
		for (int j = 0; j<n;j++){
			printf(" ");
		}
		for (int i = 0; i<5;i++){
		printf("*");
		}
		printf("\n");
	}	
}
