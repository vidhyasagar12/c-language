#include<stdio.h>
int main(){
	int low,high,mid,key,found=0;
	int n,arr[n];
	printf("enter the n value ");
	scanf("%d",&n);
	printf("enter the key value  ");
	scanf("%d",&key);
	low=0;
	high=n-1;
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	while(low<=high)
	{
	mid=(low+high)/2;
	if(key<arr[mid])
	{
		high=mid-1;
	}
	else if(key>arr[mid])
	{
		low= mid+1;
	}
	else if(arr[mid]==key)
	{
			printf("array value founda at %d",mid);
	
		found=1;
	
	}
	else
	printf("array value not  found ");
}
return 0;
	
}
