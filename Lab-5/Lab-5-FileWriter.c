#include <stdio.h>

int 
main(void)
{
	FILE *fp;

  	fp = fopen("C:/Users/edmon/projects/C-Programming/Lab 5/q6file.txt", "w+");
   	fputs("17 3 2500 3450 1825", fp);
   	fclose(fp);
	return(0);
}

