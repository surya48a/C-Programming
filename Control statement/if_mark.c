//WAP to display result of student based on marks value
/*
#include<stdio.h>
void main()
{
int m;
printf("Enter marks value:");
scanf("%d",&m);
if(m>=70 && m<=100)
printf("A\n");
else if(m>=50 && m<=69)
printf("B\n");
else if(m>=35 && m<=49)
printf("C\n");
else if(m<=35)
printf("Fail\n");
else
printf("Wrong marks\n");
}
*/
#include<stdio.h>
void main()
{
int m;
printf("Enter your marks:");
scanf("%d",&m);
if(m>=50 && m<=69)
printf("B\n");
else if(m>=70 && m<=100)
printf("A\n");
else if(m<=34)
printf("Fail\n");
else if(m>=35 && m<=49)
printf("C\n");
else
printf("Wrong marks\n");
}

