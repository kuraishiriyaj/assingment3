#include<stdio.h>
/* write a program to check whether roots of a given quardic equation
  are real & distinct real & equal or imaginary roots?
*/
int main()
{
int D;
printf("enter is the quadratic equation is D");
scanf("%d",&D);
if(D==0)
printf("this is the real equal");
else if(D<0)
printf("this is the imaginary number");
else if(D>0)
printf("this is the real distinct number");
    return 0;
}