#include<stdio.h>
int main(){
	int n,i,r,fact,limit,sum;
	printf("enter the limit value");
	scanf("%d",&limit);

for(n=1;n<=limit;n++){
 sum=0;
   while(n>0)
   {
   	r=n%10;
   	fact=1;
   	for(i=r;i>=1;i--)
   	{
   		fact=fact*i;
	   }
	   sum=sum+fact;
	   n=n/10;
   }
  if(n==sum)
  printf("%dstrong\n",n);}
  return 0;
}
