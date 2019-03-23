#include <stdio.h>

int
main(void)
{
	FILE *in;
	double temp = 1, xhigh = 1, xlow = 1, max = 0, min = 100;
	double numA [25], tripleA[25], normal [25];
	int i;
	
	in = fopen("numbers.txt","r");
	
	for (i = 0; i < 25; i++)
	{
		fscanf(in,"%lf",&temp);
		numA[i] = temp;
		if (xhigh < temp)
		{
			xhigh = temp;
		}
		if(xlow > temp)
		{
			xlow = temp;
		}
	}
	
	for (i = 0; i < 25; i++)
	{
		tripleA[i] = 3*numA[i];
		printf("%.2lf\t",numA[i]);
	}

	printf("\n\n");

	for (i = 0; i <25; i++)
	{
		printf("%.2lf\t",tripleA[i]);
		normal[i] = min + ((numA[i]-xlow)*(max-min))/(xhigh-xlow);
	}
	
	printf("\n\n");
	
	for (i = 0; i <25; i++)
	{
		printf("%.2lf\t",normal[i]);
	}
	
	printf("\nHighest Number is: %.2lf\n",xhigh);
	printf("\nLowest Number is: %.2lf\n",xlow);
	fclose(in);
	
	return (0);
}

