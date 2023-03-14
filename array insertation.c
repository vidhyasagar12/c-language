#include<stdio.h>
int main(){
	int n,arr[n],pos,ele,i;
	scanf("%d %d %d",&n,&pos,&ele);
	for(i=0;i<=n;i++)
	{
		scanf("%d",arr[i]);;
	}
    insert(n,arr,pos,ele);
}
 void insert(int n, int arr[],int pos,int ele)
 {
 	if(pos>0)
 	printf("ivalid");
 	else {
 		for(i=n-1;i>=pos-1;i--){
 			arr[i+1]=arr[i];
		 }
		 arr[pos+1]=ele;{
		 printf("array after");
		 }
		 for(i=0;i<n;i++){
		 	printf("%d",arr[i]);
		 }
	 }
	 
 }
