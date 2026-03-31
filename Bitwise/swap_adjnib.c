#include<stdio.h>
void main()
{
unsigned int num=0x52F80755,r1,r2;
printf("Before: %X\n",num);
r1=(num&0xf0f0f0f0)>>4;
r2=(num&0x0f0f0f0f)<<4;
num=r1|r2;
printf("After:  %X\n",num);
}
