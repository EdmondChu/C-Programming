#include <stdio.h>
int
main()
{
	int j, b_num, num_sam, num_org;
	File *fp;
	char buff[255];
	
	fp = fopen("C:/Users/edmon/projects/C-Programming/Lab 5/q6file.txt", "r");
	fscanf(fp, "%s", buff);
  	printf("Beach Number : %s\n", buff );
	
	for(j = 0; j < num_sam; j++)
	{
		printf("Enter sample %d\n", j + 1);
		scanf("%d", &num_org);
		printf("Sample %d: %d\n", j + 1, num_org);	    
	}
}

