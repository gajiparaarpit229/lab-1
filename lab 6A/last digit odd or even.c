#include <stdio.h>
void main()
{
    int n, r;
    printf("Enter number: ");
    scanf("%d", &n);
    r=n % 10;
    if(r % 2 == 0)
        printf("Last digit %d is even.\n", r);
    else
        printf("Last digit %d is odd.\n", r);
}
