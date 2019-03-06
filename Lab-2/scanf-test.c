#include <stdio.h>

int main(void)
{
	char name1[256];
	int height;
	
	printf ("Enter your name 'space' height in cm\n");
	scanf ("%s", &name1[0]);
	scanf ("%d", &height);
	
	printf ("Your name is %s, and your height is %d cm", name1,height);
}
	

