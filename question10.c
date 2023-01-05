#include<stdio.h>
/* write a program which takes the cost price and selling price of a procuct
 from the user now calculate and print profit or loss percentage?
*/
int main()
{
    float costprice;
    float sellingprice;
    float PP;
    float LP;
    float p;
    float L;
    printf("enter is the cost price");
    scanf("%f",&costprice);
    printf("enter is the selling price");
    scanf("%f",&sellingprice);
    if(sellingprice>costprice)
    {
        p=(sellingprice-costprice);
        PP=(p*100)/costprice;
        printf("profit percentage %.2f%%",PP);
          }
    else
    {
       L=(costprice-sellingprice);
       LP=(L*100)/costprice; 
       printf("loss percentage %.2f%%",LP);
    }
    

    return 0;
}