#include<stdio.h>
int main(){
	float marksa;
	float marksb;
	float marksc;
	printf("entre the marks");
	scanf("%f%f%f",&marksa,&marksb,&marksc);
	int total=marksa+marksb+marksc;
	if(total>=100)
	{if(marksa>=10&&marksb>=10&&marksc>=10)
			printf("chef will win");
	else
	 
	 printf("chef will lose");
}
	return 0;
}
