#include<stdio.h>
int main()
{
    int n,i,f;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum,avg;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    for(i=0;i<n;i++)
    {
        if(i==sum/n)
        {
            f++;
        }
    }
    if(f>0)
    printf("True");
    else
    printf("False");
}