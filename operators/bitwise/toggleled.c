#include<stdio.h>
void main()
{
char num,pos;
printf("Enter 1 byte int num:");
scanf("%hhd",&num);
printf("Enter bit pos:");
scanf("%hhd",&pos);
printf("Before:%hhd\n",num);
num=num^1<<pos;
printf("After:%hhd\n",num);
} 
