#include<stdio.h>
void main()
{

 int a;
 float sa;
 printf("enter a no :");
 scanf("%d",&a);
 if(a>=10000 && a<20000)
 {
 
  sa=a+(a*0.2)+(a*0.8);
  printf("%f",sa);
}
 else if(a>=20000 && a<30000)
 {
 
  sa=a+(a*0.25)+(a*0.9);
  printf("%f",sa);
}
 else if(a>=30000)
 {
 
  sa=a+(a*0.3)+(a*0.95);
  printf("%f",sa);
}
}
