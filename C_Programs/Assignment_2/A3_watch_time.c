/* This is watch_Program */
/* pre processor directive */
#include<stdio.h>


/* global variable declaration */
int main()
{
  int s,min,hr,temp,temp2;
  printf("Enter the time in second");
  scanf("%d",&s);
  hr=s/3600;
  temp=s%3600;
  min=temp/60;
  temp2=temp%60;
  printf(" %d sec =  %d hr %d min %d sec ",s,hr,min,temp2);
return 0;
}

