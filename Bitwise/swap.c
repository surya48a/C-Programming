#include<stdio.h>
void main()
{

int i=-380,j=221;
printf("before: i=%d j=%d\n",i,j);
i=i^j;
j=i^j;
i=i^j;
printf("after: i=%d j=%d\n",i,j);
}
