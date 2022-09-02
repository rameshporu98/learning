#include <stdio.h>
int main(){

	float price[3];
	printf("Enter prices:\n");
	scanf("%f", &price[0]);
	scanf("%f", &price[1]);
        scanf("%f", &price[2]);
	
	printf("total price1 is :%f",price[0]+(0.18*price[0]));
	printf("total price2 is :%f",price[1]+(0.18*price[1]));
	printf("total price3 is :%f",price[2]+(0.18*price[2]));
	return 0;
}

