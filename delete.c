#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int i,j,in;
	printf("enter position of elment to be delete");
	scanf("%d",&in);
	if(in>4){
		printf("delet is not possible");
	}
	else{
		for(i=in;i<5;i++){
			arr[i]=arr[i+1];
		}
	}
	for(i=0;i<5;i++){
	
	printf("%d",arr[i]);
}
	return 0;
	
}
