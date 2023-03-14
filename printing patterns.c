#include<stdio.h>
int main(){
	int i,j,n;
	char c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1,c='A';j<=i;j++)
		{
		
		++c;
		}
		printf("%c",c);
		printf("\n");
	}
	return 0;
}
