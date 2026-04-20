//WAP to scan a given char is lwr or upr or digits or spl char
#include<stdio.h>
void main()
{
char ch;
printf("Enter a char:");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
printf("lwr case.. ascii:%d\n",ch);
else if(ch>='A' && ch<='Z')
printf("upr case.. ascii:%d\n",ch);
else if(ch>='0' && ch<='9')
printf("digits.. ascii:%d\n",ch);
else
printf("spl char.. ascii:%d\n",ch);
}
