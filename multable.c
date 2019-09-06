#include<stdio.h>
int main()
{
	int a,c,i;
	printf("Enter the number table needed : ");
	scanf("%d",&a);
printf("---------------\n");
	for(i=1;i<=10;i++)
	{
	c=a*i;
	printf("| %d * %d | %d |\n",a,i,c);

	}
printf("---------------\n");
	return 0;
}

