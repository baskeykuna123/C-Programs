#include<stdio.h>
main()
{
	int n,f=1;
	printf("Enter a natural number:\n");
	scanf("%d",&n);
	if(n>=0)
	{
	
	for(;n;n--)
		f=f*n;
	printf("Factorial is %d",f);
} 
	else
		printf("Invalid number");
	getch();
	
}
