#include<stdio.h>
float fact(float n){
	if (n==0 || n==1) return 1;
	 return n*fact(n-1);
}
void series(float n){
	float i;
	float sum=0;
	for( i=1;i<=n;i++){
		sum = sum+(i/fact(i));
		
	}
	printf("%f",sum);
	return;
	
}
int main(){
	float n;
	printf("enter the no of terms");
	scanf("%f",&n);
     series(n);
 //printf("%d is the sum of the series",sum);
 return 0;
}
