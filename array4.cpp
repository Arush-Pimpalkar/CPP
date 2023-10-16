#include <stdio.h>
int main(){	
	int b[6];
	int a[6] = {1,2,3,4,5,6};
	for(int i = 0; i < 6; i++){	
		if(a[i]%2 == 1){
			b[i+1] = a[i];
			}
		else{
			b[i] = a[i];
		}
		}

	
	for(int i = 0; i < 6; i++){	
	printf("%d ",b[i]);
		}
}
