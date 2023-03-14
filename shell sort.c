#include<stdio.h>
void shell(int a[], int n)
{
	int interval,i;
	for(interval=n/2;interval>0;interval/=2)
	{
		for(i=interval;i<n;i++)
		{
			int temp = a[i];
			int j;
			for(j=i;j>=interval&&a[j-interval]>temp;j++)
			{
				a[j]= a[j-interval];
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
	int n = 5;
	int a[] = {5,4,3,2,1};
	shell(a,n);
	print(a,n);
	return 0;
}
