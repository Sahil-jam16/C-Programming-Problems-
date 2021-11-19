#include<math.h>
#include<stdio.h>
int main()
{
    int p,n,r;
    float ci,si;
    printf("Enter the principal amount:\t");
    scanf("%d",&p);
    printf("Enter the no of years;\t");
    scanf("%d",&n);
    printf("Enter the rate of interest:\t");
    scanf("%d",&r);
    si=(p*n*r)/100,ci=pow((p*(1+r)/100.0),n);
    printf("The simple interest :%.f \n The compound interest:%.f",si,ci);
    return 0;
}