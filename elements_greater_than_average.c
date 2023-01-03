#include<stdio.h>
int main()
{
    int n,i,c=0,s=0,avg;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=avg)
        {
            c++;
        }
    }
    printf("%d",c);
}