#include<stdio.h>
main()
{
	int a;
	printf("Please enter number to check:\n");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("Number is Positive");
	}
	if(a<=0)
	{
		printf("Number is negative");
	}
	getch();
}
