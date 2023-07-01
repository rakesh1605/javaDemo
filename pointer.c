#include<stdio.h>
int main(){
	int a=3;
	int *x;
	x=&a;
	int *y; int b=5;
	y=(&a,&b);//address of b is stored in y
	int *z=&a;
//	*x=20;//value of a is changed to20
	 int c=*y;//*y means b value is stored in c
/*	printf("%p\n",x);
	printf("%p\n",y);
	printf("%p",z);*/
	printf("%d   ",c);
	printf("%d\n",a);
		printf("%p",x);
	return 0;
	
	
/*	printf("%p\n",x);
	printf("%p\n",&x);
	printf("%d\n",*x);
	printf("%d",sizeof(int*));*/
	return 0;
	
	
}
