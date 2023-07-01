#include<stdio.h>
void increasing(int x,int n){
	if(x>n){
		return;
	}
//	printf("%d\n",x);
	increasing(x+1,n);
		printf("%d\n",x);
	return ;
}
 int main(){
 	int n;
 	printf("enter the no");
 	scanf("%d",&n);
 	increasing(1,n);
 	
 }
