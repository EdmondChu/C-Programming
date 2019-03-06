#include <stdio.h>

int
main(void)
{
	int input1, input2;
	double circumference; 
	
	printf("Enter the long radius\n");
	scanf("%d",&input1);
	printf("Enter the short radius\n");
	scanf("%d", &input2);
	
	circumference = 2*3.14*sqrt((input1*input1+input2*input2)/2);
	
	printf("Circumference is %lf",circumference);
	return(0);
	}

