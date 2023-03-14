#include<stdio.h>
void bubblesort(int n,int a[])
{
	int j,i;
	for(j=0;j<n-1;++j)
	{int i;
		for(i=0;i<n-1-j;++i)
		{
			if(a[i]>a[i+1])
			{
				int temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	printf("array values after sorting \n");
	for(i=0;i<n;i++);
	{
		printf("%d\n",a[i]);
	}
}

int main(){
	int size;
	printf("enter the array size");
	scanf("%d",&size);
	int arr[size];
	printf("enter the array %d values",size);
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubblesort(size,arr);
}
