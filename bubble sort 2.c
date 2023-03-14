#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int k,a[n];
	for(k=0;k<n;k++)
	{
		scanf("%d",a[k]);
	}
	int j,i;
	for(j=0;j<n-1;++j)
	{int i;
		for(i=0;i<n-1-j;++i)
		{
			if(a[k]>a[k+1])
			{
				int temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[k]);
	}
}
