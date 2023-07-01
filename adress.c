#include<stdio.h>
int main(){
	int a[2]={1,2};
	printf("%p\n",&a[1]);
	printf("%p",&a[0]);
	char ch[2]={'r','t'};
	//	printf("%p\n",&ch[0]);
	//	printf("%p",&ch[1]);
	return 0;
}
