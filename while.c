# include <stdio.h>
int main(){
	int i, num;
	printf("Enter the num :");
	scanf("%d", &num);
	while(i+=2,i<=10){
		printf("%d\n",(num*i));
	}
	return 0;
}
