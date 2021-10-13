/* This is Divisibel_by_5_Program */
/* pre processor directive */
#include<stdio.h>
/* global variable declaration */
int main()
{
  int i, sum=0,count7=0;;
  printf("The number divisible by five is\n");
  for(i=1;i<=100;i++)
  {
     if(i%7==0)
   { count7++;
    printf("%d\n",i); 
	sum+=i;
	     
   }
  
  }
	 printf("The sum of numbers divisible by 7 =%d\n there are %d numbers divisible by 7",sum,count7);
return 0;
}

