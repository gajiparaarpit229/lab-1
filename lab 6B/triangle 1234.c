#include<stdio.h>
void main()
{
	float a,b,c;
	printf("a: ");
	scanf("%f",&a);
	printf("b: ");
	scanf("%f",&b);
	printf("c: ");
	scanf("%f",&c);
	
	if(a==b&&b==c)
	{
		printf("it is equliateral triangle");
	}
	else if	(a==b || b==c || a==c)
	
    {
		printf("it is isosceles triangle");
	}
	else if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (b*b)+(c*c)==(a*a)){
		printf("it is right angle triangle. ");
	}
	else
	{
		printf("it is scalene triangle");
	}
	
}







