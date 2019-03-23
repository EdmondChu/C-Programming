#include <stdio.h>

int
main(void)
{
	FILE *in;
	double waterA[50];
	double temp;
	int num_months = 0, i;
	
	in = fopen("water.txt","r");
	
	for(i = 0; i < 30; i++)
	{
		fscanf(in,"%lf",&temp);
		printf("%.2lf\t",temp);
	}
	return (0);
}

