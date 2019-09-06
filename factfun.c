#include<stdio.h>
int fact(int a);
int main()
{
int a;
printf("Enter 1 number for fact");
scanf("%d",&a);
printf("%d",fact(a));
return 0;
}
int fact(int a)
{
if(a>1)
return a*fact(a-1);
}

