#include<stdio.h>
int main(){
int n,rev=0;

printf("entre the n value ");
scanf("%d",&n);
int temp=n;
while(n>0){
	 int x=n%10;
    rev=rev*10+x;   
    n=n/10;
}
n=temp;
if(rev==temp)
{
    printf("its a palindrome ");
}
else
{
    printf(" not a palindrome");
}

    return 0;
}
