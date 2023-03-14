#include<stdio.h>
int main(){
	FILE*ptr;
	ptr=fopen("C:\\Users\\Vidhya Sagar\\OneDrive\\Desktop\\save.txt","r");
	int ch;
	while((ch=fgetc(ptr))!=EOF)
{
		printf("%c",ch);}
     fclose("ptr");
	 return 0;	
}
