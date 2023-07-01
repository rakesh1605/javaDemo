#include<stdio.h>
void swap(int* x,int* y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return;
}
int main(){
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("after swap value a= %d ,b= %d",a,b);
	return 0;
	
	
}
