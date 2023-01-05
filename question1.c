#include<stdio.h>
/* write a program to check whether a given number is positive non positive?
*/
int main()
{
    int number;
    printf("enter is the number");
    scanf("%d",&number);
    if(number<=0)
    printf("number is the non postive %d",number);
    else
    
        printf("number is the postive %d",number);
    
    

    return 0;
}