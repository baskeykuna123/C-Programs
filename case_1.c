#include<stdio.h>
main()
{
	int choice,a,b;
	while(1)
	{	
	printf("\n1. Addition");
	printf("\n2. Substraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	printf("\n5. exit");
	
	printf("\n\nEnter your choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter Two numbers\n");
			scanf("%d %d",&a,&b);
			printf("Sum is: %d\n",a+b);
			break;
		case 2:
			printf("Enter Two numbers\n");
			scanf("%d %d",&a,&b);
			printf("\nSubstraction is: %d\n",a-b);
			break;	
		case 3:
			printf("Enter Two numbers\n");
			scanf("%d %d",&a,&b);
			printf("\nMultiplication is: %d",a*b);
			break;
		case 4:
			printf("Enter Two numbers:\n");
			scanf("%d %d",&a,&b);
			printf("\nDivision is: %d\n",a/b);
			break;
		case 5:
			exit(0);			
		default:
			printf("Invalid Choice");
	}
	getch();
    }
}
