
#include<stdio.h>
/* write a program t find the gretest among three given
numbers print number once if the greatest number appears
two or three times?
*/
int main()
{
int a,b,c;
printf("enter is the a & b&c");
scanf("%d%d%d",&a,&b,&c);
printf("%d",a>b?a>c?a:c:b>c?b:c);
return 0;    
}