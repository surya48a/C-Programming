#include<stdio.h>
void main()
{
char num,pos,r;
printf("Enter 1 byte int num:");
scanf("%hhd",&num);
printf("Enter bit pos:");
scanf("%hhd",&pos);
r=num>>pos&1;
printf("r=%hhd\n",r);
r=num&1<<pos;
printf("r=%hhd\n",r);
}
