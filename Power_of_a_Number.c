#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,p;
    scanf("%d%d%d",&x,&y,&m);
    p=(pow(x,y));
    printf("%d",p%m);
}