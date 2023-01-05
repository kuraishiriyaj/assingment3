#include<stdio.h>
/* write a program to check whether a given number is 
disible by 3 and disible by 2?
*/
int main()
{
int number;
printf("enter is the number");
scanf("%d",&number);
if(number%3==0&&number%2==0)
printf("this is the divisible 3 and 2");
else
printf("this is the not divisible 3 and 2");
    return 0;
}