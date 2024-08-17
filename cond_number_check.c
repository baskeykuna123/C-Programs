#include<stdio.h>
main()
{
	int a;
	printf("Please enter number to check:\n");
	scanf("%d",&a);
	
	a>0 ? printf("Number is Positive") : printf("Number is negative");
	getch();
}
