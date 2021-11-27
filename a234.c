#include <stdio.h>


int main()
 
{
 
float p,r,s,t;

 printf("enter the principal");

 scanf("%f",&p);

 printf("\n enter the rate");

 scanf("%f",&r);

 printf("\nenter the time period in years");

 scanf("%f",&t);

 s=(p*r*t)/100;

 printf("\n simple intrest for principal amount is:%f",s);

    return 0;

}
