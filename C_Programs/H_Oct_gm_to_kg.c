/* This is gmtokg_converter_Program */
/* pre processor directive */
#include<stdio.h>

/* global variable declaration */
int main()
{
int i,gm;
float kg;
 printf(" Gram to Kilogram converter. \n Enter the value in gm\n");
 scanf("%d",&gm);
 kg=0.001*gm;
 printf(" \n The value %d gm to %0.5f kg",gm,kg);
return 0;
}

