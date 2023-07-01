#include<stdio.h>
int powerlog(int a,int b){
	if(b==0){
		return 1;
	}
	if(b%2==0){
		int x=powerlog(a,b/2);
		return x*x;
	}
	if(b%2!=0){
		int y=powerlog(a,b/2);
		return y*y*a;
	}
}
int main(){
	int a,b;
	printf("enter the base ");
	scanf("%d",&a);
		printf("enter the power ");
	scanf("%d",&b);
   int value=powerlog(a,b);
   printf("%d is the answer",value);
   return 0;
	
}
