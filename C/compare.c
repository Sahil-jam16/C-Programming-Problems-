#include<stdio.h>
int main()
{
    int a[10],l,s;
    int i,j,n,k;
    puts("Enter the no of terms : ");
    scanf("%d",&n);

    printf("Enter the terms : ");
    for(k=0;k<=n;k++)
    {
      scanf("%d",&n);
    }
    l=s=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
          l=a[i];
        if(a[j]<s)
          s=a[i];            
    }
    printf("Largest Array : %d ",l);
    printf("Smallest Array : %d ",s);
    
    
    return 0;
}