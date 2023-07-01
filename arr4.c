#include<stdio.h>
int main()
{
	int n, i, j, count = 0;
	printf("enter size of array :");
	scanf("%d", &n);
	int a[n];
	printf("Enter the elements :\n");
	for(i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	//1 1 2 2 3
	for(i = 0; i<n;i++)
	{
       for(j=0; j<n; j++)
       {
       		if(a[i] == a[j])
       		{
       			count++;
			}
	   }
	   if(count==1)
	   {
	   	 	printf("Unique no : %d", a[i]);
	   }
	   count = 0;
	}
}
