/*19. Write a program that prompts the user to input an integer and then outputs both the individual
digits of the number and the sum of the digits.
For example, it should output the individual digits of 3456 as 3 4 5 6 and the sum as 18.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
int n,a,b,c,d,e,f,i1,i2,i3,i4,i5,sum;
printf("Enter a five digit number : ");
scanf("%d",&n);

for(i1=0;i1<=9;i1++)
{
    if(n/10000==i1){
            a=n%10000;
        printf("\n%d",i1);

    }

}
for(i2=0;i2<=9;i2++)
{
    if(a/1000==i2){
             b=a%1000;
        printf("   %d",i2);

    }

}
for(i3=0;i3<=9;i3++)
{
    if(b/100==i3){
            c=b%100;
        printf("   %d",i3);

    }

}
for(i4=0;i4<=9;i4++)
{
    if(c/10==i4){
             d=c%10;
        printf("   %d",i4);

    }

}

printf("   %d",d);
sum=(a+b+c+i1+d);
printf("\nSum : %d",sum);

  return 0;
}