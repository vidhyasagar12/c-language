#include<stdio.h>
int linearsearch(int,int[],int);
int linearsearch(int size,int arr[size],int key)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(key==arr[i])
		printf("key value found at index %d",i);
        exit(0);
    }
    return 1;
}
void main()
{
	int size;
	printf("enter the size");
	scanf("%d",&size);
	int arr[size],i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int key;
	printf("enter thr key value");
	scanf("%d",&key);
  int res=	linearsearch(size,arr,key);
  if(res==1)
  printf("key not found");
}
