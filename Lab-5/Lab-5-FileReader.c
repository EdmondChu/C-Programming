#include <stdio.h>

main() {

   FILE *fp;
   char buff[255];

   fp = fopen("C:/Users/edmon/projects/C-Programming/Lab 5/q6file.txt", "r");
   fscanf(fp, "%s", buff);
   printf("Beach Number : %s\n", buff );

   fscanf(fp, "%s", buff);
   printf("Number of Samples : %s\n", buff );
   
   fgets(buff, 255, (FILE*)fp);
   printf("3: %s\n", buff );
   fclose(fp);

}

