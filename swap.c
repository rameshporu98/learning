#include <stdio.h>
int main(){
	int a=10;
	int b=20;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	printf("before swapping values are *p1=%d,*p2=%d\n",*p1,*p2);
	*p1 = *p1+*p2;
	*p2 = *p1-*p2;
	*p1 = *p1-*p2;

	printf("after swapping values are p1=%d,*p2=%d\n",*p1,*p2);
	return 0;
}

