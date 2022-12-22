#include<stdio.h>
int main()
{
    int n,i,r,s,sum=0;
    scanf("%d",&n);
    s=n*n;
    while(s!=0)
    {
        r=s%10;
        sum+=r;
        s/=10;
    }
    if(sum==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}