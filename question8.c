#include<stdio.h>
/* write a program to check wheather a given year is leap
 year or not leap?
*/
int main()
{
  int year;
  printf("enter is the year");
  scanf("%d",&year);
  if(year%4)
    printf("this is not leap years");
     else if(year%100)
       printf("leap years");
     else if(year%400)
       printf("not leap");
    else
    {
       printf("leap years");
    }
    
    return 0;
}