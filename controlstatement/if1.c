#include<stdio.h>
void main()
{
if(sizeof('a')>-1)
printf("one\n");
else
printf("two\n");
if(!printf("one\n"))
printf("yes\n");
else
printf("no\n");
}
