#include<stdio.h>
void main()
{
unsigned long int num,r1,r2;
printf("Enter hexadecimal int:");
scanf("%lu\n",&num);
r1=(num&0xf0f0f0f0f0f0f0f0)>>4;
r2=(num&0x0f0f0f0f0f0f0f0f)<<4;
num=r1|r2;
printf("num:%lx\n",num);
}
