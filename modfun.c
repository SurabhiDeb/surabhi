#include<stdio.h>
int mod(int a,int b);
int main()
{
int a,b;
printf("Enter 2 numbers");
scanf("%d %d",&a,&b);
printf("%d",mod(a,b));
return 0;
}
int mod(int a,int b)
{
int c;
c=a%b;
return c;
}

