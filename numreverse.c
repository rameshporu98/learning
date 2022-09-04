# include <stdio.h>
int main()
{
	int n,sum,r;
	printf("Enter the number n :");
	scanf("%d", &n);
	while(n>0){
		r = n%10;
		sum = sum*10+r;
		n = n/10;
	}
	printf("the reversed number is %d\n",sum);
	return 0;
}
