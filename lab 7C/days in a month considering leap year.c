#include<stdio.h>
int main(){
    int month = 12,year = 2012;
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 10:
        case 12:
        printf("number of days is 31.");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("number of days is 30.");
        break;
        case 2:
            if((year % 400 == 0) || (year % 100 != 0) && (year % 4 == 0))
            {
                printf("number of days is 29.");
            }
            else
            {
                printf("number of days is 28.");
            }
            break;
    }
}