#include<stdio.h>
void shell(int a[],int n);
void print(int [],int );
void shell(int a[],int n)
{
	int interval,i;
	for(interval=n/2;interval>0;interval/=2)
	{
		for(i=interval;i<n;i++)
		{
			int temp = a[i];
			int j;
			for(j=1;j>=interval&&a[j-interval]>temp;j++)
			{
				a[j] = a[j-interval];
				a[j] = temp;
			}
		}
	}
}
void print(int a[], int n)

{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	shell(a,n);
	print(a,n);
	return 0; 
}
