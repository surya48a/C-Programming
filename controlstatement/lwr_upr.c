#include<stdio.h>
void main()
{
char ch;
printf("Enter any alphabet:");
scanf("%c",&ch);
ch>>5&1?printf("lowercase\n"):printf("uppercase\n");
}
