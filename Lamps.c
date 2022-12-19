#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    int s;
    s=x*k;
    if(x<y)
    printf("%d",s+x*(n-k));
    else
    printf("%d",s+y*(n-k));
}