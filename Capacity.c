#include<stdio.h>
int c(int t,int s,int b)
{
    int cp;
    cp=2*t*s*b*512/1024;
    return cp;
}
int main()
{
    int t,s,b;
    scanf("%d%d%d",&t,&s,&b);
    int a=c(t,s,b);
    printf("%d KB",a);
    
}