#include<stdio.h>
main()
{

int x;
printf("Enter a number");
scanf("%d",&x);

if(x%2==0)
	printf("%d is an even number",x);
else
	printf("%d is an odd number",x);
getch();
}

