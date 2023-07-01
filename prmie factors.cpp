#include<stdio.h>
int main(){
	int n=96,c=0,i,j;
	printf("factors of a nuber is : ");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		//	printf("Factors %d \n", i);
			c = 0;
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					c++;
				}	
			}
			if(c==2)
			{
				printf("prime (%d)",i);
			}
		}
	//printf("%d",i);
	}	
}
