#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}