/* This is GCD_no._Program */
/* pre processor directive */
#include<stdio.h>
/* global variable declaration */
int main()
{
  int i,a,b;
  printf("Enter two numbers");
  scanf("%d %d",&a,&b);
  for(i=1;i<=a*b;i++)
  {
    if(i%a==0 && i%b==0)
     {
       printf("The LCM of numbers is =%d",i);
     }
  }
   
  
return 0;
}

