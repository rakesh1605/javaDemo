#include<stdio.h>
#include<math.h>
int main(){

char i ,j ,count='A';
//scanf("%d",&n) ;
for( i='A';i<='D';i++){
	
	for( j='A';j<=i;j++){
		
     printf("%c",count) ;
		count++ ;
	}
	printf("\n") ;
}

return 0 ;
}
