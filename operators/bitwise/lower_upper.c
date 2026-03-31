#include<stdio.h>
void main()
{
char c;
printf("Enter char:");
scanf("%c",&c);
printf("Before:%c\n",c);
c=c^32;
printf("After:%c\n",c);
}
