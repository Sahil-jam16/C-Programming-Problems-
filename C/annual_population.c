/* 24. There are 9,870 people in a town whose population increases by 10 percent each year. Write
a loop that display the annual population and determines how many years it will take to
surpass the population(Y) of 30,000. Enhance this program to read Y as input.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n=9870,timer,y,i,apop=0;
    float ai=0.10;
    printf("Enter the population to surpass : ");
    scanf("%d",&y);
    
    for(timer=1;n<=y;timer++)
    {

     if(n<=y)
     {
        apop=(n*ai)+ai;
        n=n+apop;
     }
       else
          break;

    }
    printf("\nAnnual population is %d",n);
    printf("\nTime period is %d years \n",timer);
    return 0;
}