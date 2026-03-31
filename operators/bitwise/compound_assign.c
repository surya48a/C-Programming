#include<stdio.h>
void main()
{
int i=85,j=17,k=44;
i=i/=j%=k;
printf("i=%d j=%d k=%d\n",i,j,k);
}
