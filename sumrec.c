#include<stdio.h>
void sum(int n,int s){
	if(n==0){
		printf("%d ",s);
		return;
		    }
		
		sum(n-1,s+n);
		return;
	}

int main(){
	int n;
	int s=0;
	printf("enter the number");
	scanf("%d",&n);
	sum(n,s);
	return 0;
}
