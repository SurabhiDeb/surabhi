#include<stdio.h>
int main()
{
int a;
printf("WHO IS THE CAPTAIN OF THE INDIAN CRICKET TEAM?\n");
printf("1. KHOLI \n2.DHONI\n3.ROHIT\n4.PANDYA\n5.BUMRAH\n");
printf("Enter the answer: ");
scanf("%d",&a);
switch(a)
{
	case 1:{ printf("CONGRATS! IT IS THE CORRECT ANSWER\n");
	break;}
	case 2:{ printf("SORRY! DHONI WAS THE PREVIOUS CAPTAIN\n");
	break;}
	case 3:{ printf("SORRY! ROHIT IS THE VICE CAPTAIN\n");
	break;}
	case 4:{ printf("SORRY! PANDYA IS NOT THE CAPTAIN\n");
	break;}
	case 5:{ printf("SORRY! BUMRAH IS NOT THE CAPTAIN\n");
	break;}
}
return 0;
}

