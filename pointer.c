# include<stdio.h>
int main(){
	int number = 50;
	int *p;
	p = &number;
	printf("address of varible p is %p \n",p);
	printf("value of variable p is %d \n",*p);
	return 0;
}
