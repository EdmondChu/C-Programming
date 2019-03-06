#include <stdio.h>
int
main()
{
	int j, b_num, num_sam, num_org, total = 0, t_avg = 0;
	
	while (b_num > 0)
	{
		printf("Enter beach number. number of samples\n");
		scanf("%d%d", &b_num, &num_sam);
		printf("Beach Number: %d\nNumber of Samples: %d\n", b_num, num_sam);
	
		for (j = 0; j < num_sam; j++)
		{
			printf("Enter Sample %d\n", j + 1);
			scanf("%d", &num_org);
			total = total + num_org;
			printf("Total: %d\n", total);
		}
		t_avg = t_avg + num_sam;
	}
	printf("Average : %d\n",(int)(total/t_avg));
	
	if((int)(total/t_avg)>3500)
	{
		printf("The Beach is not safe\n");
	}
	
	else
	{
		printf("Beach is safe\n");
	}
}

