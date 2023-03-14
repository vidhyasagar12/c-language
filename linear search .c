#include<stdio.h>
int  main(){
	int n;
	printf("enter n value ");
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		printf("ener array value\n");
		scanf("%d",&arr[i]);
	}
	int key;
	printf("enter the key value ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==arr[i])
		{
			printf("key value exist at index: %d",i);
		
		
		}
		else
		{
			printf("no key value exist ");
	      break;
		}
	}
	return 0;
}
