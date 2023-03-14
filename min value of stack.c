#include<stdio.h>
int min(int, int[]);
int main()
{
    int n,i;
    printf("%d",&n);
    int stack[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&stack[i]);
    }
   int res = min(n,stack);
   printf("%d",res);
   return 0;
}
int min(int n, int stack[])
{  int temp,i;
     for( i=0;i<n;i++)
    {
        if(stack[i]>stack[i+1])
        {
            temp = stack[i];
            stack[i]=stack[i+1];
            stack[i+1]=temp;
        }
    }
    return stack[0];
}
