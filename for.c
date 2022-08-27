# include <stdio.h>
int main()
{
	int i,number;
	printf("Enter the number : ");
	scanf("%d", &number);
	for (i=1;i<=10;i++){
		printf("%d\n", (number*i));
	}
	return 0;
}
