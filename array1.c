# include<stdio.h>
int main(){
	int marks[3];
	printf("Enter phy marks :\n");
	scanf("%d", &marks[0]);
	printf("Enter che marks :\n");
        scanf("%d", &marks[1]);
        printf("Enter maths marks :\n");
        scanf("%d", &marks[2]);

	printf("phy = %d,che = %d,math = %d",marks[0],marks[1],marks[2]);
	return 0;
}


