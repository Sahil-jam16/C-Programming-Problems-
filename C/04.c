#include<stdio.h>
void main()
{
    float b,e,t,r;
    printf("Enter the beginning reading :\n");
    scanf("%f" ,&b);
    printf("Enter the final reading :\n");
    scanf("%f",&e);
    t=e-b;
    r=t*0.35;
    printf("You traveled %0.1f miles.",t);
    printf("At 0.35$ per mile\n"); 
    printf("your reimbursement is $%0.2f",r);
    
}