# include <stdio.h>

void namaste();
void bonjour();

int main(){
printf("print f for french & i for india\n :");
char ch;
scanf("%c", &ch);
if(ch == 'f'){
	bonjour();
}else
{
	namaste();
}
return 0;
}
void namaste()
{
	printf("Namaste\n");
}

void bonjour()
{
	printf("Bonjour\n");
}
