#include<stdio.h>
void main(){
	int celcius,f;
	printf("enter fehrenheit :");
	scanf("%d",&f);
	celcius = ((f-32)*5)/9;
	printf("celcius = %d",celcius);
}
