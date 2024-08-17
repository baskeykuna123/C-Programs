#include<stdio.h>
main()
{
	int x,count=0;
	printf("Enter number to check:\n");
	scanf("%d \n",&x);
	while(x)
	{
		x/=10;
		count++;
	}
	printf("Total digits: %d",count);
	getch();
	
}
