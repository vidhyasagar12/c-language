#include<stdio.h>
int main(){
	int c,i,j,count=0;

	for (j=1;j<=100;j++)
	{
	for(i=1;i<=j;i++)
	{
		if(j%i==0)
		{
		count++;
	} }
	 if(count==2)
	 {
	 c++;
	 printf("%d",j);
	 } }
 printf("%d",c);



	return 0;
}
