#include<stdio.h>
int main()
{
    time_t t;   
    time(&t);

    printf("date and time: %s", ctime(&t));

    printf("\n\n\t\t\tHave a good day !\n\n\n");
    return 0;
}
