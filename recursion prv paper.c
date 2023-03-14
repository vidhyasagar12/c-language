#include<stdio.h>
void rev(int , int[]);
void rev(int n, int a[])
{
	int i,j;
	for(i=0;i,n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[j]=a[j-i-1];
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
int main()
{
	int n;
	printf("enter the n value");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	rev(n,a);
	return 0;
}
