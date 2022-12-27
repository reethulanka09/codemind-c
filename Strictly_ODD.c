#include<stdio.h>
int main()
{
    int n,i,flag;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]%2==1)
       {
           if(i%2==1)
           {
               flag=1;
           }
           else
           {
               flag=0;
               break;
           }
       }
    }
    if(flag==1)
    printf("True");
    else
    printf("False");
}