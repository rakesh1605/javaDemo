	#include<stdio.h>
int main(){
	int i,j,a;
	int max=0;
	int arr[3]={2,1,5};
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(arr[j]>arr[i])
			{
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
				
				
		}
		printf("%d",arr[i]);
   }
	return 0;	
	}
	

