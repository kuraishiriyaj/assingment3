#include<stdio.h>
/* write a program to check whether a given 
is an even number or an odd number whithout 
 using % operater?
*/
int main()
{
int number;
printf("enter is the number");
scanf("%d",&number);
if(number&1==1)
   printf("number is the odd:%d",number);
   else
   printf("number is the even:%d",number);

    return 0;
}