#include<stdio.h>
int main(){
	int i,j,n,space;
	printf("Enter n value :");
	scanf("%d", &n);
	for(i=n;i>=1;i--){
		for(space=1;space<=n-i;space++){
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++){
			printf("*");
		}
		printf("\n");
	}
}
