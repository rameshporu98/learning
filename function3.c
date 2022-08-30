# include <stdio.h>
int addition(int a, int b);

int main(){
	int a, b;
	printf("Enter a value\n :");
	scanf("%d", &a);
	printf("Enter b value\n :");
	scanf("%d", &b);

	int s =addition(a, b);
	printf("sum of two numbers is :%d\n",s);
	return 0;

}

int addition(int a, int b){
	return a+b;
}


