# include<stdio.h>
int main(){
	int i,j,temp;
	int a[] = {1,4,2,6,3,7,9,8,5,10};
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(a[j] > a[i]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("printing the sorted array\n");
	for(i=0;i<10;i++){
		printf("%d\n",a[i]);
	}
}
