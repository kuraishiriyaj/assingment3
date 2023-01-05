#include<stdio.h>
/*  write a program to take marks of 5 subject from the user
Assume marsk are given out of the 100 and passing marksis 33
now display whether the candidate passed the examination or failed?
*/
int main()
{
    float hindi,english,mathe,physics,chemistry;
    printf("enter is the marks of the subject hindi& english,mathe,physics,chemisrty");
    scanf("%f%f%f%f%f",&hindi,&english,&mathe,&physics,&chemistry);
    if(hindi>=33&&english>=33&&mathe>=33&&physics>=33&&chemistry>=33)
    
        printf("pass");
        
        
    
    else
    printf("faail");

    return 0;
}