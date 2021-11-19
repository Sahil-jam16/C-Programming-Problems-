#include<stdio.h>
void main()
{
    float v,a,l;
    printf("Enter the accleration(m/s^2):\t");
    scanf("%f",&a);
    printf("Enter the velocity(m/s):\t");
    scanf("%f",&v);
    l=(v*v)/(2*a);
    printf("The length of the platform should be,\t%0.2f m",l);


}