#include <stdio.h>
int main(){

	for (int n=0;n<6;n++){	
		for (int i = 0; i<n;i++){
			printf("*");
			}
	for (int j = 11-2*n; j>0;j--){
		printf(" ");
		}	
	for (int i = 0; i<n;i++){
			printf("*");
			}		
	printf("\n");
	}	
	
	
	for (int n=0;n<6;n++){
		for(int i = 6-n;i>=1;i--){
		printf("*");
		}
		
		for (int j = 10- (11-2*n); j>0;j--){
		printf(" ");
		}
		for(int i = 6-n;i>=1;i--){
		printf("*");
		}

		printf("\n");
		
		}
		
	
	
		
}
