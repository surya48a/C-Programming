#include<stdio.h>
void main()
{
int i=23,j=44;
printf("before: i=%d j=%d\n",i,j);
i^=j^=i^=j;
printf("after: i=%d j=%d\n",i,j);
}
