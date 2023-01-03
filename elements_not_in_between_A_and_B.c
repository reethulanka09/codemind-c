#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b,c,s=0;
    scanf("%d%d",&b,&c);
    for(i=0;i<n;i++)
    {
        if(!(a[i]>=b && a[i]<=c))
        {
            s++;
            printf("%d ",a[i]);
        }
    }
    if(s==0)
    printf("-1");
}