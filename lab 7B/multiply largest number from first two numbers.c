#include<stdio.h>
int main(){
    int a,b,c,x,multiply;
    scanf("%d %d %d",&a,&b,&c);
    x = (a>b)?a:b;
    multiply =x*c;
    printf("%d",multiply);
}