#include<stdio.h>
void oddoreven()
{
    int i,n;
    printf("enter the range:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        printf("%d is even\n",i);
        else
        printf("%dis odd\n",i);
    }
}
    void main()
    {
        oddoreven();
    }
