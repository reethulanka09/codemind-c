#include<stdio.h>
int main()
{
    int n,kc;
    scanf("%d",&n);
    if(n%5==0 || n%10==0)
    {
        if(n%10==0)
        printf("%d",n/10);
        else if(n%10==5)
        printf("%d",(n/10)+1);
    }
    else
    printf("-1");
}