#include<stdio.h>
int main()
{
	int i,j,k,n,c;
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		/*for(j=n;j>=i;j--)
		{
			printf(" ");
		}*/
c=1;
		for(k=n;k>=i;k--)
		{
			printf("%d",c++);
		}
	printf("\n");
	}
return 0;
}

