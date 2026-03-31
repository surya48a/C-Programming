#include<stdio.h>
void main()
{
char num=15,pos,r;
printf("num:%hhd\n",num);
printf("Enter bit position:");
scanf("%hhd",&pos);
r=num&1<<pos;
printf("%hhd\n",r);
}

