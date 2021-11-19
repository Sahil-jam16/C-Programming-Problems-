#include<stdio.h>
int main()
{
  float i,f,y,cm,m;
  printf("Enter the measured inches:\t");
  scanf("%f",&i);
  f=i/12,y=i/32,cm=2.54*i,m=i/39.37;
  printf("The measured value in foot:\t%0.2f \nThe measured value in yards:\t%0.2f \nThe measured value in centimeters:\t%0.2f \nThe measured value in meters:\t%0.2f",f,y,cm,m);
  return 0;
}
