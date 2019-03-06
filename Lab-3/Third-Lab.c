#include <stdio.h>

int
main(void)
{
	int num1,num2,num3,num4, sumQ2, sumQ3, sumQ4;
	double numQ5;
	
	printf("Enter 4 Numbers\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	scanf("%d",&num4);
	
	sumQ2 = num1+num2+num3+num4;
	printf("The sum of your 4 numbers is: %d\n",sumQ2);

	sumQ3 = num1+num2-num3-num4;
	printf("The sum of the first 2 numbers minus the last 2 numbers is: %d\n",sumQ3);
	
	sumQ4 = num1*num1+num2*num2+num3*num3+num4*num4;
	printf("The sum of the squared of your 4 numbers is: %d\n",sumQ4);
	
	numQ5 = (sqrt(sumQ4))/sumQ2;
	printf ("The square root of the sum of the squares of the numbers, divided by the sum of all the numbers is: %.2lf\n",numQ5);
	
	return (0);
}

