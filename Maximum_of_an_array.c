#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,f=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max;
    max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d",max);
}