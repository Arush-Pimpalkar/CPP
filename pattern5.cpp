#include<stdio.h>
int main(){
	for (int n=0;n<6;n++){	
		for (int i = 0; i<n;i++){
		printf(" ");
		}
		for (int j = 11-2*n; j>0;j--){
		printf("*");
		}
		printf("\n");
	}	
}

