#include<stdio.h>
/* write a program to check whether a given number is positive
negative or zero?
*/
int main()
{
int number;
printf("enter is the number");
scanf("%d",&number);
if(number<0)
printf("this is the number negative :%d",number);
else if(number==0)
printf("this is the zero number :%d",number);
else
printf("this is the number positive :%d",number);



    return 0;
}