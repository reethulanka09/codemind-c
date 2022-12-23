#include<stdio.h>
int main()
{
    int n,l,i;
    scanf("%d%d",&n,&l);
    for(i=1;i<=n;i++)
    {
        if((l*i)%n==0)
        {
            printf("%d",l*i);
            break;
        }
    }
}