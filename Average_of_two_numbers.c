#include<stdio.h>
void a(int n1,int n2)
{
    float avg;
    avg=(n1+n2)/2.0;
    printf("Average of %d and %d is: %0.2f",n1,n2,avg);
}
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    a(n1,n2);
}