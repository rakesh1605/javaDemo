#include<stdio.h>
float add(float a, float b)
{
	float sum = a + b;
	return sum;
}

int main(){
	int n = 153, sum =0;
	
	/*while(n!=0){
		sum = sum + n%10;
		n = n/10;
	}*/
	//sum = n%10 + n/10%10 + n/100%10;
	float s = add(3.4,5.3);
	printf("Sum : %f", s);
	return 0;
}

