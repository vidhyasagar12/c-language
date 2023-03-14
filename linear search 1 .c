#include<stdio.h>

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
for(i=0;i<n;i++)
	{
		if(key==arr[i])
		{
			temp=1;
			ind=i;
		}
	}
	if(temp==1)
	{
	printf("key value  found at index %d",ind);
}
else
{
	printf("key value not found");

}
return 0;
}

