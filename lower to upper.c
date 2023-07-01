#include<stdio.h>
int main(){
	char ch;
	int n;
	/*printf("enter a character ");
	scanf("%c",&ch);
	n=ch;
	/*if(n>=97 && n<=122){
		printf("lower case");
		printf("upper case: %c",ch-32);
	}
	if(n>=65 && n<=90){
		printf("upper case");
	}
	if (n<65 || n>122 || (n>90 && n<97)){
		printf("invalid");
	}*/
	for(n = 0; n<=300; n++)
	{
		printf("%c", n);
	}
	return 0;
}
