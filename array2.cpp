#include <stdio.h>
void swap(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}


int main(){	
	
	int a[5] = {7,567,217,999,4};
	int c = a[0];
	for(int k = 0; k<25;k++){
	
	for (int n=0;n<4;n++){
		if (a[n] > a[n+1]){
			swap(a[n],a[n+1]);
		}
		}
	}
	for(int i = 0; i < 5; i++){
	
	printf("%d ",a[i]);
}
}
