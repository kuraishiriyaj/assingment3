#include<stdio.h>
/*  write a program to check whether a given number is disible
 by 7 or disible by 3?
*/
int main()
{
int number;
printf("enter is the number");
scanf("%d",&number);
if(number%7==0||number%3==0)
printf("this the divisible 7 and 3");
else
printf("this the not divisible 7 and 3");
    return 0;
}