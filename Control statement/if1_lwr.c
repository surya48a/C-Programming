//WAP to scan the char is lower or not otherwise dont
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a char:");
	scanf("%c",&ch);
	if(ch>='a' && 'z'>=ch)
		printf("lwr case.. ascii:%d\n",ch);
}
