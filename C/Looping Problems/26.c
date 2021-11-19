

#include<stdio.h>
int main()
{
    int marks[5],total=0;
    printf("Enter the five students marks : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
        total=total+marks[i];
        
    }
    printf("The total marks is %d ",total);
    //printf("The total marks is %d ",marks[0]+marks[1]+marks[2]+marks[3]+marks[4]);
    
    
    return 0;
}