#include<stdio.h>
int main()
{
	char val;
	
	printf("Enter a char to check if it is a vowel: ");
	scanf("%c",&val);
	val=val-32;
	//printf("%d",j);
	if(val=='A' || val=='E'|| val=='I' || val=='O' || val=='U')
	printf("Entered char is a vowel\n");
	else
	printf("Entered char is not a vowel\n");
	val=val+1;
	printf("Next character is :%c\n",val);
	return 0;
}

