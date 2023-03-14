#include<stdio.h>
int main(){
	int n,r,i,x;
	int sum=0,product=1;
	scanf("%d",&n);
	int temp=n;
	for (i=1;i<=2;i++)
	{
		r=n%10;
		sum=sum+r;
		product=product*r;
		n=n/10;
	}
	n=temp;
	x=sum+product;
	if(x==n)
	{
		printf("maigc num");
	}
	else
	printf("not a magic");
	return 0;
}
