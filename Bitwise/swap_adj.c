#include<stdio.h>
void main()
{
unsigned int num=0x52F80755,r1,r2;
printf("Before: %x\n",num);
r1=(num&0xff00ff00)>>8;
r2=(num&0x00ff00ff)<<8;
num=r1|r2;
printf("After:  %x\n",num);
}
