#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n],i,e;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(a[i]==e)
        {
            c++;
        }
    }
    printf("%d",c);
}