#include<stdio.h>
/* write a program to check whether given character is an alphate
 (uppercase),an alphate (lowercase) a digit or a special character?
*/
int main()
{
  char ch;
  printf("enter is the ch");
  scanf("%c",&ch);
  if(ch>='a'&&ch<='z')
  printf("this is the lowercase");
  else if(ch>='A'&&ch<='Z')
  printf("this is the uppercase");
  else if(ch>='0'&&ch<='9')
  printf("this is the digit");
  else
  printf("this is the special symbel");
  
  
    return 0;
}