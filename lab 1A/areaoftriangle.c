#include<stdio.h>
void main()
{
	int a,b,c;
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	printf("c: ");
	scanf("%d",&c);
	
	if(a==b&&b==c)
	{
		printf("it is equliateral triangle");
	}
	else
	{
	
    if(a==b || b==c || a==c)
	{
		printf("it is isosceles triangle");
	}
	else
	{
		printf("it is scalene triangle");
	}
}
}
