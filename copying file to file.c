#include<stdio.h>
void main(){
	FILE *ptr1,*ptr2;
	ptr1=(fopen("C:\\Users\\Vidhya Sagar\\OneDrive\\Desktop\\save.txt","r"));
	ptr2=fopen("C:\\Users\\Vidhya Sagar\\OneDrive\\Desktop\\save2.txt","w");
	int ch;
	while((ch=fscanf(ptr1))!=EOF)
	{
		fprintf(ch,ptr2);
		
	}
	printf("copied");
	
}
