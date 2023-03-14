#include<stdio.h>
int main(){
	register int a=10;
	printf("a=%d",a);
	{
		register int a=35;
		printf("a=%d",a); 
	}
	return 0;
}
