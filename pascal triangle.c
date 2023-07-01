#include<stdio.h>
int factorial(int x){
	int fact=1;
	int i;
	for( i=1;i<=x;i++){
		fact=fact*i;
	}
	return fact;
}
int combination(int n, int r){
	int ncr=factorial(n)/(factorial(r)*factorial(n-r));
	return ncr;
}int main(){
	int i,j,n,icj,k;
	printf("enter no to show pascal triangle");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		for(k = 0; k<n-i; k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++){
			icj=combination(i,j);
			printf(" %d",icj);
		}
          printf("\n");
		}
	
	
	return 0;
}
