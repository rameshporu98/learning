# include <stdio.h>
int main(){
	int i;
	for(i=0;i<=10;i++){
		printf("%d", i);
		if(i==5)
			break;
	}
	printf("\ncame out of the loop =%d\n",i);
}

