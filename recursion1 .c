#include<stdio.h>
int main(){
	int n;
	printf("enter the n value");
	scanf("%d",&n);
	int ans = fact(n);
	printf("%d",ans);
}
int fact(int i)
{
	int res;
	if(i==0)
	res=1;
	else
	res=i*fact(i-1);
	return res;
}
