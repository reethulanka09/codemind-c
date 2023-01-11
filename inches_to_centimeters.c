#include<stdio.h>
float inc(int h)
{
    float i;
    i=2.54*h;
    return i;
}
int main()
{
    int h;
    scanf("%d",&h);
    float op=inc(h);
    printf("%0.2f",op);
}