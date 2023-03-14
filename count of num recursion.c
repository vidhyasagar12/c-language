#include <stdio.h>  
int main()  
{  
   long int num;  // variable declaration  
    int count=0;  // variable declaration  
    printf("Enter a number");  
    scanf("%d",&num);  
   count=func(num);  
   printf("Number of digits is : %d", count);  
   return 0;  
}  
int func(long int n)  
{  
    static int counter=0; // variable declaration  
  if(n!=0)  
  {  
      counter++;  
      return func(n/10);  
  }  
    else  
    return counter;  
}  

