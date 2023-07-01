#include<stdio.h>//stair case problem with 1,2,3 steps at once
int stair(int n){
	if(n==1) return 1;
	if(n==2) return 2;
	if(n==3) return 4;
	return stair(n-1)+stair(n-2)+stair(n-3);
	
}
int main(){
	int n;
	printf("enter the number of stairs");
	scanf("%d",&n);
	printf("%d is the no of way",stair(n));
	return 0;
}
