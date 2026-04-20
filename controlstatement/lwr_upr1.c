#include<stdio.h>
void main()
{
char ch,r;
printf("Enter any alphabet:");
scanf("%c",&ch);
r=ch>=97&&ch<=122?printf("lowercase\n"):printf("uppercase\n");
}
