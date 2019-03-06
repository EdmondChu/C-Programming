#include <stdio.h>

int 
main(void)
{
	int num [5] ;
	int i;
	
	for (i = 0; i < 5; i++)
	{
		printf("Enter number %d\n", i + 1);
		scanf("%d", &num[i]);
		printf("Number %d: %d\n", i + 1, num[i]);
	}
	return(0);
}

