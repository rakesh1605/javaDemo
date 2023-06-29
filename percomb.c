#include<stdio.h>
 //int fact();
 int main(){
 	int n,factor;
 	printf("enter a number");
 	scanf("%d",&n);
 factor =	fact(n);
 	printf("factorial of the no is %d",factor);
 	return 0;
 }
 int fact(int x){
 	int i;
 	int fact = 1;
 	for(i=1;i<=x;i++){
 		fact=fact*i;	
	 }
	 return fact;
 }
