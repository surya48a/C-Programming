#include<stdio.h>
void main()
{
unsigned char num=0x67;
printf("Before: %X\n",num);
num=((num&0xAA)>>1)|((num&0x55)<<1);
printf("After:  %X\n",num);
}
