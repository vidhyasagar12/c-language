#include<stdio.h>
#include<string.h>
int main(){
	char st1[20],st2[20]="@same";
	puts("enter the string");
	gets(st1);
	puts(st1);
	puts(st2);
    strcat(st2 ,st1);
    puts(st2);
	}
