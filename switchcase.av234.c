#include <stdio.h>


   
int main()


 {
  
     
       int a,b,c,d,e,f,g,ch;

 
      printf("\nchoose operations \n 1.addition\n2.subtraction\n3.multiplication\n4.division\n");

       printf("enter the variable a & b here:");
 
      scanf("%d,%d",&a,&b);
 
       printf("enter your choice:");

        scanf("%d",&ch);
 

     
    switch(ch)

 
{
   
     
       case 1:

  

           c=a+b;


         printf("\nsum of  two numbers is %d",c);

         break;

    
     case 2:

        
         
           d=a-b;
 
          printf("\ndifference of two numbers is%d",d);

          break;



    case 3:

  

        e=a/b;

 
      printf("a/b =%d",e);

 
      break;
   


    case 4:

 
      
      f=a*b;

 
       printf("\nthe product of two numbers is%d",f);

        break;



    case 5:


        g=a%b;


        printf("\nthe mod of two numbers is%d",g);

        
        break;


     
    default:
 
    printf("error!enter the correct choice");


}   
        
       
  
   return 0;

 
      
}
