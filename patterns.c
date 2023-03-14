#include<stdio.h>
int main(){
	int i,j;
	for(i='A';i<='D';i++)
	{
		for(j='D';j>=i;j--)
		{
			printf("%c ",i);
		}
			printf("\n");
	}

	return 0;
}
