#include<stdio.h>
int main(){
	int n,count=0,count1=0;
	printf("enter the n value ");
	scanf("%d",&n);
	while(n)
	{
		if(n&1)
		{
			count1++;
		}
		
	n=	n>>1;
	}
	printf("no:of 1's in a binary %d is %d",n,count1);
	return 0;
}
