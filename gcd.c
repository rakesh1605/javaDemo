#include<stdio.h>
int min(int x, int y){
	
	if(x<y)	return x;
	
	else	return y;
	
}
int hcf(int a,int b){
	int i,hcf;
	for(i=1;i<=min(a,b);i++){
		if(a%i==0 && b%i==0){
			hcf=i;
		}
		
		
	}
	return hcf;
	
}
int main(){
	int a,b;
	printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
	int gcd;
	gcd=hcf(a,b);
	printf("%d",gcd);
	return 0;
}
