#include<stdio.h>
int main()
{
int n,i;
printf("enter the size of array");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{	int key = a[i];
	int j = i-1;
	while(j>=0&&a[j]>key)
	{
		a[i+1] = a[j];
		j  = j-1;
	}
	a[i+1] = key;
}

for(i=0;i<n;i++)
{
	printf("%d",&a[i]);
}
return 0;
}
