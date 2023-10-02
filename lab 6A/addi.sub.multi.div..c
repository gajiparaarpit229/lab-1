#include<stdio.h>
void main(){
	double a,b;
	char choice;
	printf("enter a choice(+,-,*,/):");
	scanf("%c",&choice);
	printf("enter a no :");
	scanf("%lf",&a);
	printf("enter a no :");
	scanf("%lf",&b);
	if (choice== '+'){
	    printf("addi. of :%lf",a+b);}
	else if(choice== '-'){
	    printf("subtraction of :%lf",a-b);}
	else if(choice== '*'){
		printf("multipli. of :%lf",a*b);}
	else if(choice== '/')
		{
			if (b!=0){
				printf("division of :%lf",a/b);
			}
			else{
				printf("ans is infinite.");	
			}	
				}
	else{
		printf("your operater is invalid.");
	}   
}
