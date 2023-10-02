#include<stdio.h>
#define DAYSINWEEK7

void main(){
	int ndays,year,week,days,DAYSINWEEK;
	printf("Enter the number of days :");
	scanf("%d",&ndays);
	year = (ndays/365);
	week = (ndays%365)/DAYSINWEEK;
	days = (ndays%365)%DAYSINWEEK;
	printf("%is = %d years,%d week,and%d days\n",ndays,year,week,days);

}
