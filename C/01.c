#include <stdio.h>

int main()
{
    int u,a,t ;
    float s,v;
    
  printf("Enter the initial velocity:\n ") ;
  printf(" Enter the acceleration: \n ") ;
  printf("Enter the time taken:\n") ;
  scanf("%d" "%d" ,&u ,&a ) ;
  scanf("%d",&t);
  
  v = u+(a*t) ;
  s = u*t+(1/2)*a*t*t ;
  
  printf("The final velocity of the particle is \t %f",v) ;
  printf("\nThe displacement of the particle is \t %f",s) ;
 

}