#include<stdio.h>
int main()
{
    char ch;
    
    printf("Do you want to shutdown your pc now (y/n)?");
    scanf("%c", &ch);

    if(ch == 'y'|| ch == 'Y')
    {   
        system("C:\\WINDOWS\\System32\\shutdown /s");
    }

    printf("\n Have a Nice Day !!");
    return 0;
}
