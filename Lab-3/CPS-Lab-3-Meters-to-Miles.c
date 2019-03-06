#include <stdio.h>

int
main(void)
{
	int meters[4];
	int i;
	double yards[4], miles[4];

	printf("This Program Converts Meters to Yards and Miles\n\n");
	
	for (i = 0; i <4 ; i++)
	{
		printf("Enter number %d\n",i+1);
		scanf("%d", &meters[i]);
		yards[i] = meters[i] * 1.094;
		miles [i] = yards[i] *  0.0006215;
	}	
	
	printf ("Meters\tYards\tMiles\n");
	
	for (i = 0; i<4 ; i++)
	{
		printf("%d\t%.2lf\t%.3lf\n", meters[i], yards[i], miles[i]);
	}
}

