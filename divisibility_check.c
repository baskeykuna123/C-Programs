#include<stdio.h>
main()
{
	int x;
	printf("Enter a number");
	scanf("%d",&x);
	if(x%5==0)
		printf("%d is divisible by 5",x);
	else
		printf("%d is not divisible by 5",x);
	getch();
}
