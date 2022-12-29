#include<stdio.h>
int main()
{
    int n,i,f=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int s;
        scanf("%d",&s);
        if(a[i]==s)
        {
            f++;
        }
    }
    if(f>0)
    printf("True");
    else
    printf("False");
}