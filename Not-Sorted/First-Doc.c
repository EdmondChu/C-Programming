#include <stdio.h>

int
main(void)
{
	double radius, area;
	
	printf("This\nis\nmy\nsecond\nC\nprogram\n");
	scanf("%lf", &radius);
		area = 3.14 * radius * radius;
	printf ("The area of your circle is %lf",area);
	return (0);
}

