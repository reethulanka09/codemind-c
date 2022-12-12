#include<stdio.h>
int main()
{
    char ch,a,z,A,Z;
    scanf("%c%c%c%c%c",&ch,&a,&z,&A,&Z);
    if (ch>='A' && ch<='Z')
    printf("uppercase alphabet");
    else if (ch>='a' && ch<='z')
    printf("lowercase alphabet");
    else 
    printf("not an alphabet");
}