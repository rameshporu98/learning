# include <stdio.h>
int fact(int n);

int main(){
	printf("Factorial of n is :%d\n",fact(5));
	return 0;

}

int fact(int n){
	if(n == 1){
		return 1;
	}

	int factNm1 = fact(n-1);
	int factN = factNm1 * n;
	return factN;
}
