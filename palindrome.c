#include<stdio.h>  
int main()    
{    
    int a,b,c,n;
    printf("to find palindrome\n ");
    printf("enter the number:");
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    b=n%10;
    c=n/10;
    if(a==c && c==a && b==b)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
    return 0;
}
