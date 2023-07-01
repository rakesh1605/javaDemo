#include<stdio.h>
int main()
  {
  	int a,b,c;
  	printf("Enter the value of a and b");
  	scanf("%d %d",&a,&b);
  	c=a;
  	a=b;
  	b=c;
  	
  	
  	printf("swap values of a=%d",a);
  	printf("swap value=%d",b);
  	return 0;
  	
  	
  }
