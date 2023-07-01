#include<stdio.h>
int main()
{
	int a=5;
	
int	x= (++a + ++a + a++ + a++);
	printf("x=%d & a=%d" , x, a);
	return 0;
}
