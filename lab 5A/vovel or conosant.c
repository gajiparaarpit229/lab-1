#include<stdio.h>
void main()
{
	char alpa;
	printf("Enter a alpa :");
	scanf("%c" , &alpa);
	if(alpa=='a'||alpa=='e'||alpa=='i'||alpa=='o'||alpa=='u'||alpa=='A'||alpa=='E'||alpa=='I'||alpa=='O'||alpa=='U'){
		printf("character is vovel");
	}
	else{
		printf("character is constant");
	}
}
