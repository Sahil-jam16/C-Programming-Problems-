#include<stdio.h>
#include<conio.h>
int main(void)
{
   int a[50],n,temp;
   int i,j;
   puts("Enter the N value : ");
   scanf("%d",&n);

   printf("Enter %d intergers for sorting ",n);
   for(i=0;i<=n;i++)
   {
     for(j=i+1;j<n;j++)
      {
          if(a[i]>a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
      }
     
   }
    for(i=0;i<=n;i++)
    {
        printf("%d/n",i);
    }


    
    return 0;
}