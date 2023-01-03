#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,d;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
        sum1=sum1+a[i];
        }
        else
        {
           sum2=sum2+a[i]; 
        }
    }
  printf("%d",abs(sum1-sum2));
}
