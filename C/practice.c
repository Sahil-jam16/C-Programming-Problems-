#include <stdio.h>

int main(void) {
	
	int t,fact=1,i=0,n;
	scanf("%d",&t);

	while(i<t)
	{
	     scanf("%d",&n);
	     i++;
	}
	
	if(n==1)
	 printf("%d",fact);

	else
	 {
	   for(i=1;i<n;i++)
	   {
	       fact=n*i;
	       
	   }
	 
	     printf("%d",fact);
	 }
	
	
	return 0;
}
