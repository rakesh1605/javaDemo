#include<stdio.h>
int main(){
	int i,size;
	int a[size];
	printf("enter size of array && no. to input");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++){
		printf("%d",a[i]);
	}
}
