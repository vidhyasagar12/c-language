#include<stdio.h>

int binary_search(n,key,arr[n])
{
int low=0,high=n-1;
while(low<=high)
{
   int	mid=(low+high)/2;
	if(arr[mid]==key)
	 return mid;
	 else if(arr[mid]<key)
	 low=mid++;
	 else
	 high=mid--;
	}
	return -1;	
}
int main(){
	int n,i;
	printf("enter the array size");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int key,temp=0,ind;
	printf("enter the key value");
	scanf("%d",&key);
	temp=binary_search(n,key,arr);
	if(temp==-1)
	{
	printf("key value not found ");
}
else
{
	printf("key value found at index %d",temp);
}

}

