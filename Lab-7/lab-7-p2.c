#include <stdio.h>

int 
main(void)
{
	FILE *yikes;
	double waterA[50];
	int num_months =0, temp = 0, i= 0;
	
	yikes = fopen("numbers.txt","r");
	
	for (i = 0; i < 30; i++)
	{
		fscanf(yikes,"%lf",&temp);	  
		printf("%.2lf",temp);
		waterA[i] = temp;
		num_months++;
	}
	
	for (i = 0; i< num_months; i++)
	{
		printf("%.2lf\t", waterA[i]);
	}
	
	return (0);
}

