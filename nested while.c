#include<stdio.h>
int main(){
	int j=0,i=0;
	while(++i<=5)
	{
		i=i*2;
		while(++j<=5)
		{
			printf("%d",j);
			
		}
		printf("%d",j);
	}
	return 0;
}
