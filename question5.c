#include<stdio.h>
/* write a program to check whether a given number is a theree
 digit number or not?
*/
int main()
{
int number;

printf("enter is the number");
scanf("%d",&number);
if(number%1000==number&&number%100!=number)
printf("this is the three digit number%d",number);
else
printf("this is not three digit number%d",number);


    return 0;
}
