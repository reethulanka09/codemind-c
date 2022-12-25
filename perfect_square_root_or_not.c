#include<stdio.h>
int main()
{
    int i,n,f=0;
    scanf("%d",&n);
    if(n==1 || n==0)
    {
        printf("True");
        f=1;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n==i*i)
        {
            printf("True");
            f=1;
            break;
        }
    }
    if(f==0)
    printf("False");
}