#include <stdio.h>


int main()
 {
    
          int i=1,n;
     
    printf("enter n to find the table:\n");
  
         scanf("%d",&n);
   
       do
 
      {
       
             printf("%d*%d=%d\n",n,i,n*i);
     
        ++i;
   
        }while(i<=12);
    
  
   
    return 0;

}