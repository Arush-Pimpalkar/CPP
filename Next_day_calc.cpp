#include <stdio.h>
int main(){
	int a,b,c;
	// c = days
	// a = month
	// b = year
	printf("Enter Day: ");
	scanf("%d",&c);
	
	printf("Enter Month: ");
	scanf("%d",&a);
	
	printf("Enter Year: ");
	scanf("%d",&b);
	
	if(c == 29 && a == 2 && (b%4 == 0 && ( b%400 == 0 || b%100 !=0))){
		c = 01;
		a = 03;
		printf("%d / %d / %d",c,a,b); // last day + feb + leap year
	}
	else if(c < 29 && a == 2 && (b%4 == 0 && ( b%400 == 0 || b%100 !=0))){
		c++;
		printf("%d / %d / %d",c,a,b); // not last day + feb + leap year
	}
	else if(c == 28 && a == 2 && (b%4 == 0 && ( b%400 == 0 || b%100 !=0))){
		c = 01;
		a = 03;
		printf("%d / %d / %d",c,a,b);// last day + feb + not a leap year
	}
	else if(c < 28 && a == 2 && (b%4 == 0 && ( b%400 == 0 || b%100 !=0))){
		c++;
		printf("%d / %d / %d",c,a,b); //not last day + feb + not a leap year
	}

	else if((a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a== 10) && c == 31){
		c = 01;
		a++;
		printf("%d / %d / %d",c,a,b); //last day + 31daysMonth
	}
	else if((a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a== 10 || a == 12) && c < 31){
		c++;
		printf("%d / %d / %d",c,a,b); //not last day + 31daysMonth
	}
	
	else if((a == 4 || a == 6 || a == 9 || a == 11) && c == 30 ){
		//last day + 30daysmonth
		c = 01;
		a++;
		printf("%d / %d / %d",c,a,b);
	}
	else if((a == 4 || a == 6 || a == 9 || a == 11) && c < 30 ){
		//not last day + 30daysmonth
		c++;
		printf("%d / %d / %d",c,a,b);
	}
	else if(a==12 && c == 31){
		b++;
		c =01; //last day of year + december 
		a=01;
		printf("%d / %d / %d",c,a,b);
	}
	else{
		printf("enter valid date");
	}

}
