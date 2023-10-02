#include<stdio.h>
void main(){
	int p,r,tp,interest;
	printf("enter principal :");
	scanf("%d",&p);
	printf("enter roi :");
	scanf("%d",&r);
	printf("enter time period :");
	scanf("%d",&tp);
	interest = (p*r*tp)/100;
	printf("interest = %d",interest);
}
