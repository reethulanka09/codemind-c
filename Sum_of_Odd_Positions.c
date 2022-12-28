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
    int sum;
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        sum=sum+a[i];
    }
    printf("%d",sum);
}