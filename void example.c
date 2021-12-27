#include<stdio.h>  
void sum();
void sub();
void prod();
void main()
{    
    printf("\nGoing to calculate the sum of two numbers:");  
    sum();  
    sub();
    prod();
}  
void sum()  
{  
    int a,b;   
    printf("\nEnter two numbers");  
    scanf("%d%d",&a,&b);   
    printf("The sum is %d",a+b);  
}  
void sub()  
{  
    int a,b;   
    printf("\nEnter two numbers");  
    scanf("%d%d",&a,&b);   
    printf("The sub is %d",a-b);  
}
void prod()  
{  
    int a,b;   
    printf("\nEnter two numbers");  
    scanf("%d%d",&a,&b);   
    printf("The product is %d",a*b);  
}