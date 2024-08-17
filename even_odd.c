#include<stdio.h>
main()
{

int x;
printf("Enter a number");
scanf("%d",&x);

if(x%2)
	printf("%d is an odd number",x);
else
	printf("%d is an even number",x);
getch();
}

