#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	printf("enter the values ");
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j>0;j--)
		{
			int t = a[j];
			a[j] = a[j-1];
			a[j-1] = t;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0 ;
}
