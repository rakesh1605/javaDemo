#include<stdio.h>
#include<string.h>
int main(){
	int i=0;
	int size =0;
	
//	char str[50];
	//printf("enter a string");
//	gets(str);
    char str[]="hello" ;
	while(str[i]='e'){
		size++;
		i++;
		
		
	}
	//puts(str);
	printf("size of the string is %d",size);
	return 0;
}
