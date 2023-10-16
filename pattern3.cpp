#include <stdio.h>
int main(){
	for (int n=5;n>0;n--){	
		for (int i = 0; i<n-1;i++){
		printf("+");
			}
	
		for(int j = 0;j<n;j++){
		printf("*");
			}
		printf("\n");
			}
	}

