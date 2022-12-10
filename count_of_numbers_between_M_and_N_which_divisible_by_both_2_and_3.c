#include<stdio.h>
int main()
{
    int i,m,n,mul=0;
    scanf("%d%d",&m,&n);
    for(i=m;i>=m && i<=n;i++)
    {
        if(i%3==0 && i%2==0)
        mul++;
    }
    printf("%d",mul);
}