#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("%d
%d
",a,b,c);
}