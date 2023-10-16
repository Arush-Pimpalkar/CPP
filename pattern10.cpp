#include <stdio.h>
int main(){

	for (int n=0;n<5;n++){	
		for (int i = 0; i<=n;i++){
			printf(" ");
			}
		for (int j = 5; j>n;j--){
			printf("+");
			}
		printf("\n");
	}	


	
	for (int n=5;n>0;n--){	
		for (int i = 0; i<n;i++){
		printf(" ");
		}
	for (int j = 0; j<6-n;j++){
			printf("+");
		}	
		printf("\n");
	}	
}
