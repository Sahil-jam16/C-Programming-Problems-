#include <stdio.h>

int main()
{
   
   float cm,in,ft ;
   
   printf("The inches to convert them in centimeters :\t");
   scanf("%f",&in) ;
   printf("The feet to convert them in centimeters :\t");
   scanf("%f",&ft) ;
   
   in = in*(2.54) ;
   ft = ft*(30.48) ;
   printf("The values after conversion are\t %.4f (inches to centimeters) and \t%.3f (feets to centimeters) ",in ,ft);
   
   return 0 ;
   

}
