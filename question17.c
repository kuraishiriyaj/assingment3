#include<stdio.h>
/* write a program which takes the length of the sides of a trigle
as an input display whether the tringle is valid or not ?
*/
int main()
{
    int A,B,C;
    printf("enter is the sides of the tringel");
    scanf("%d%d%d",&A,&B,&C);
    if(A+B>C||B+C>A||C+A>B)
       printf("valid tringle");
       else
       {
        printf("not valid");
       }
       

    return 0;
}