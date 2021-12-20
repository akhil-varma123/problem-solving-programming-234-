#include <stdio.h>

int main()
{
    int i,n,fact=1;
    printf("Enter the variable:");
    scanf("%d",&n);
    
    if(n<0)
       printf("negative number donot have factorial");
       else{
           for(i=1;i<=n;++i)
           fact*=i;
       }
       {
        printf("factorial of %d = %d",n,fact);
    }
    

    
    return 0;
}