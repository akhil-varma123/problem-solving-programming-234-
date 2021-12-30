\\function with arg and no retun...
#include<stdio.h>
int sum(int i,int j,int k)
{
    printf("sum=%d\n",i+j+k);
}
int sub(int i,int j,int k)
{
    printf("sub=%d\n",i-j-k);
}
int prod(int i,int j,int k)
{
    printf("prod=%d\n",i*j*k);
}
int main(){
    int a,b,c;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    sum(a,b,c);
    sub(a,b,c);
    prod(a,b,c);
}
