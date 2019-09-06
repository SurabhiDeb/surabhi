#include<stdio.h>
int main()
{
	char *name;
	int cool;
	printf("Enter Your Name to find if u are cool or not: ");
	scanf("%s",name);
	printf("Enter a number out of 10: ");
	scanf("%d",&cool);
	if(cool>7)
	printf("HEY DUDE %s! YOU ARE A COOL GUY AND YOU HAVE %d COOLNESS\n",name,cool);
	else
	printf("BETTER LUCK NEXT TIME\n");
	return 0;
}
