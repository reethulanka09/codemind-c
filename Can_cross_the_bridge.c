#include<stdio.h>
int c(int x,int y,int z)
{
    int m;
    m=(z-y)/x;
    return m;
}
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int a=c(x,y,z);
    printf("%d",a);
}