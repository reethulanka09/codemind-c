#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    c=21-a-b;
    if(c>=1 && c<=10)
    printf("%d",c);
    else
    printf("-1");
}