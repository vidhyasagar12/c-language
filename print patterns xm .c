#include<stdio.h>
void printpattterns(int);

int main(){
int a;
	printpatterns(a);
	return 0;
}
void printpatterns(int a)
{
	char c;
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1,c='A';j<=i;j++)
		{
			printf("%c",c);
			c++;
		}
		printf("\n");
	}
}
