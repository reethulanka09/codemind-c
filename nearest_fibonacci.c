#include<stdio.h>
int main()
{
	int a=0,b=1,n=0,num;
	scanf("%d",&num);
	while(num>n)
	{
		n=a+b;
		a=b;
		b=n;
	}
	if(num-a<b-num)
	{
		printf("%d",a);
	}
	else if(num-a==b-num)
	{
		printf("%d %d",a,b);
	}
	else
	{
		printf("%d",b);
	}
}