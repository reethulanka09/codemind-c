#include<stdio.h>
int a(int b1,int b2,int x)
{
    int avg;
    avg=3*x-(b1+b2);
    return avg;
}
int main()
{
    int b1,b2,x;
    scanf("%d%d%d",&b1,&b2,&x);
    int b=a(b1,b2,x);
    printf("%d",b);
}