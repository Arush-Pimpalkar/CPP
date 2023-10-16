#include<stdio.h>
int main(){
	for (int n=0;n<6;n++){	
		for (int i = 6-n; i>0;i--){
		printf(" ");
		}
		for (int j = 2*n+1;j>0;j--){
			if(j%2 == 0){
				printf("*");
				}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}	
}

