#include<stdio.h>
int main()
{
 char alpha;
scanf("%c",&alpha);
switch(alpha)
{
	case 'a': printf("a is a vowel");
	 break;
	 case 'e': printf("e is a vowel");
	  break;
	  case 'i': printf("i is a vowel");
	   break;
	   case 'o' : printf(" o is a vowel ");
	    break;
	    case 'u': printf("u is a a vowel");
	     break;
	     default: printf("%c is consonent",alpha);
}
	return 0;
}
