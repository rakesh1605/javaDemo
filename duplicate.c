/*#include<stdio.h>
int main(){
	int i,arr[5],j;
	printf("enter five numbers");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("the actual array is");
	for(i=0;i<5;i++){
		printf(" %d ",arr[i]);
		
	}
      printf("array after deleting repeat no is");
      
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]==arr[j]){
				arr[j]=arr[j+1];
				
			}
		
		}
		//printf("%d",arr[i]);
	}*/
	#include<stdio.h>
int main(){
	int i,arr[5],j;
	printf("enter five numbers");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("the actual array is");
	for(i=0;i<5;i++){
		printf(" %d ",arr[i]);
		
	}
      printf("array after deleting repeat no is");
      
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]==arr[j]){
				arr[j]=arr[j+1];
				
			}
		
		}
		//printf("%d",arr[i]);
	}
	for(i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	return 0;
}


