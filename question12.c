#include<stdio.h>
/* write a program to check whether a given alphate is in 
uppercae or lowercase?
  
*/
int main()
{
    char ch;
    printf("enter is the ch");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    printf("this is the lowercase");
    else
       if(ch>='A'&&ch<='Z')
       printf("this is the uppercase");



    return 0;
}