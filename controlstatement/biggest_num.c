#include<stdio.h>
void main()
{
int i=15,j=10,k=13,r;
r=i>j?i>k?i:k:j>k?j:k;
printf("r=%d\n",r);
}
