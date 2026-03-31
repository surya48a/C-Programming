#include<stdio.h>
void main()
{
char ch;
printf("Enter any char:");
scanf("%c",&ch);
(ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')?printf("alphabet\n"):printf("not alphabet\n");
}
