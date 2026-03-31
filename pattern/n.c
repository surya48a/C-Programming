#include<stdio.h>
void main()
{
int num,rev=0,r,sum=0,c=0;
printf("Enter int number:");
scanf("%d",&num);
j:
r=num%10;
rev=rev*10+r;
num=num/10;
if(num)
goto j;
num=rev;
l:
r=num%10;
num=num/10;
c++;
if(c%2)
sum=sum+r;
if(num)
goto l;
printf("%d\n",sum);
}
