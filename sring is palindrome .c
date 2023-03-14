#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
 gets(a);
    int l= strlen(a);
    int i,flag;
    for(i=0;i<l;i++)
    {
        if(a[i]!=a[l-i-1])
        {
         flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("not a palindrome");
    }
    else
    printf("palindrome");
    return 0;
}
