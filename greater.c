#include<stdio.h>
int main(){
	int i,arr[5],sm1=0,sm2=0;
	printf("enter 5 numbers");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		if(i%2==0){
			sm1=sm1+arr[i];
		}
		else{
			sm2=sm2+arr[i];
		}
	}
	printf("%d",sm1-sm2);
	return 0;
	
}
