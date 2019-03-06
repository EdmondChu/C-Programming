#include <stdio.h>

int
main(void)
{
	int num [3];
	int temp, i,j;
	
	for(i = 0; i<3; i++)
	{
		printf("Enter number %d\n",i+1);
		scanf("%d",&num[i]);
	}
	
	for(j = 0; j < 3; j++)
	{
		for (i = j; i < 2; i++)
		{
			if (num[i] > num[i+1])
			{
				temp = num[i+1];
				num[i+1] = num[i];
				num[i] = temp;
			}
		}
	}
	
	printf("%d , %d", num[0], num[1]);
	return (0);
}

