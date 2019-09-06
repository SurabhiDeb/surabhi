#include<stdio.h>
int main()
{
	int a=8,b=7;
	a^=b^=a^=b;
	printf("nos%d %d",a,b);
	return 0;
}
