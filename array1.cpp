#include <stdio.h>
int main(){
	int a[5] = {7,5,217,999,4};
	int c = a[0];
	for (int n=0;n<5;n++){
//		printf("%d " , a[n]);
		if (c < a[n]){
			c = a[n];
		}
		else{
		}
	}
	printf("Biggest number is: %d",c);
		
}
