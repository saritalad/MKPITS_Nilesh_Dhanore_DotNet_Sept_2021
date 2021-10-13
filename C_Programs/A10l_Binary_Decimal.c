/* This is Decimal to binary_Program */
/* pre processor directive */
#include<stdio.h>

/* global variable declaration */
int main()
{
int n,Decimal=0,temp,i=1;
printf("Enter Decimal Number");
scanf("%d",&n);
    while(n!=0)
      {
	  temp=n%10;
	  Decimal=Decimal+(temp*i);
	  i=i*2;
	  n=n*2;
	  }
	  printf(" \nthe binary number is=%d \n",binary);
	 
	    
	  	     	   	      
	
return 0;
}

