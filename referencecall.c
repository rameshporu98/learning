# include<stdio.h>

void fun(int*, int*);

int main(){
	int x=7;
	int y=5;
	fun(&x,&y);
		printf("x=%d,y=%d\n",x,y);
		


}

void fun(int* x,int* y){
	*x=5;
	*y=7;
	printf("x=%d,y=%d\n",*x,*y);
}


