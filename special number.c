#include<stdio.h>
int main(){
	int n,r;
	int sum=0,product=1;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		product=product*r;
		n=n/10;
	}
	if((sum+product)==n)
	{
		printf("maigc num");
	}
	else
	printf("not a magic");
	return 0;
}
