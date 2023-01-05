#include<stdio.h>
/*write a program to print greater between two numbers print
 one number if both are same?
*/
int main()
{
 int a,b;
 printf("enter is the two number a&b");
 scanf("%d%d",&a,&b);
 printf("%d", (a>b&&b<a)?a:b);
return 0;
}