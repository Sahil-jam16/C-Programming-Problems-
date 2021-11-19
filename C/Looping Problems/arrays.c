#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[50],i=0,p,temp,num,count=0,val;
    printf("Enter values for arrays from -1 to end : ");
    do{
        scanf("%d",&num);
        if(num==-1)
            break;
        a[i]=num;i++;count++;   
            
    }while(1);
    printf("\nEND");
    
   
   
   
    printf("\nEnter the position of array to change the value : ");
    scanf(" %d",&p);
    printf("\n Enter the value to be changed : ");
    scanf("%d",&val);
    
    
    if(p<count)
       { temp=a[p]=val;
         a[p]=temp;
        }
    else 
      { printf("\nInvalid Position ");
       break; }
    
    i=0;
    printf("\nThe new Array is : ");
    while(i<count)
    {
        printf("%d ",a[i]);
        i++;
    }

}