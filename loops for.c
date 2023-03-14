#include<stdio.h>
int main(){
	int seat[7]={0,1,0,1,0,1,1};
	
	int empty=0;
	int occupied=0;
	int i;
	for(i=0;i<7;i++)
	{
		if(seat[i]==0)
		empty+=1;
		else
		occupied+=1;
	}
	printf("empty seat=%d\n",empty);
	printf("occupied seat=%d",occupied);
	return 0;
}
