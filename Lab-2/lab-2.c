#include <stdio.h>

int
main(void)
{
	double a;
	printf("Enter a real number\n");
	scanf("%lf", &a);
	printf ("Nearest hundreth is %.2lf and nearest thousandth is %.3lf",a,a);
	return (0);
}

